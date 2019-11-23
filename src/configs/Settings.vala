public class GtkThemeVariantSwitcher.Configs.App {
    public string name { get; private set; }
    public string app_id { get; private set; }
    public string theme_variant { get; private set; }

    public GtkThemeVariantSwitcher.Configs.App.from_variant(GLib.Variant variant) {
        if(variant.is_of_type(new VariantType("(sss)"))) {
            unowned string name;
            unowned string app_id;
            unowned string theme_variant;

            variant.get("(&s&s&s)", out name, out app_id, out theme_variant);

            this.name = name;
            this.app_id = app_id;
            this.theme_variant = theme_variant;
        } else {
            warning("Variant has invalid type");
        }
    }

    public bool equal(App other) {
        return this.name == other.name && this.app_id == other.app_id && this.theme_variant == other.theme_variant;
    }
}

public class GtkThemeVariantSwitcher.Configs.AppList : Object {
    private GLib.List<GtkThemeVariantSwitcher.Configs.App> apps = new GLib.List<GtkThemeVariantSwitcher.Configs.App>();

    public bool add_app(GtkThemeVariantSwitcher.Configs.App new_app) {
        if(!contains_app(new_app)) {
            apps.append(new_app);
            //layouts_changed();
            return true;
        }
        return false;
    }

    public bool contains_app(GtkThemeVariantSwitcher.Configs.App given_app) {
        return get_app_index(given_app) != -1;
    }

    public int get_app_index(GtkThemeVariantSwitcher.Configs.App given_app) {
        int i = 0;
        foreach(GtkThemeVariantSwitcher.Configs.App a in apps) {
            if(a.equal(given_app)) {
                return i;
            }
            i++;
        }
        return -1;
    }

    public GtkThemeVariantSwitcher.Configs.App? get_app_by_window_group(string window_group) {
        foreach(GtkThemeVariantSwitcher.Configs.App a in apps) {
            if(a.app_id == window_group) {
                return a;
            }
        }
        return null;
    }

    public void remove_all () {
        apps = new GLib.List<GtkThemeVariantSwitcher.Configs.App>();
    }
}

public class GtkThemeVariantSwitcher.Configs.Settings {
    private static GtkThemeVariantSwitcher.Configs.Settings? instance;
    private GLib.Settings settings;
    public GtkThemeVariantSwitcher.Configs.AppList app_list { get; private set; }

    public signal void settings_changed();

    public static GtkThemeVariantSwitcher.Configs.Settings get_instance() {
        if (instance == null) {
            instance = new GtkThemeVariantSwitcher.Configs.Settings();
        }
        return instance;
    }

    private Settings() {
        settings = new GLib.Settings(GtkThemeVariantSwitcher.Configs.Constants.ID);
        app_list = new GtkThemeVariantSwitcher.Configs.AppList();
        update_list_from_gsettings();

        settings.changed[GtkThemeVariantSwitcher.Configs.Constants.SETTINGS_APP_VARIANTS_KEY].connect(() => {
            update_list_from_gsettings();
            settings_changed();
        });
    }

    public void update_list_from_gsettings() {
        app_list.remove_all();
        GLib.Variant sources = settings.get_value(GtkThemeVariantSwitcher.Configs.Constants.SETTINGS_APP_VARIANTS_KEY);
        if(sources.is_of_type(VariantType.ARRAY)) {
            for(size_t i = 0; i < sources.n_children(); i++) {
                GLib.Variant child = sources.get_child_value(i);
                app_list.add_app(new App.from_variant(child));
            }
        } else {
            warning("Unkown type");
        }
    }

}

