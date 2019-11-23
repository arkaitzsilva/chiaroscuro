public static int main(string[] args) {
    Gtk.init(ref args);

    GLib.MainLoop loop = new GLib.MainLoop();

    check_opened_windows_themes();

    GtkThemeVariantSwitcher.Configs.Settings.get_instance().settings_changed.connect(() => {
        check_opened_windows_themes();
    });

    Wnck.Screen.get_default().window_opened.connect((window) => {
        check_window_theme(window);
    });

    loop.run();

    return 0;
}

private void check_opened_windows_themes() {
    foreach(Wnck.Window window in Wnck.Screen.get_default().get_windows()) {
        check_window_theme(window);
    }
}

private void check_window_theme(Wnck.Window window) {
    var window_id = window.get_xid();
    var window_group = window.get_class_group_name();
    var app = GtkThemeVariantSwitcher.Configs.Settings.get_instance().app_list.get_app_by_window_group(window_group);
    if( app != null && (set_app_theme_variant(window_id.to_string(), app.theme_variant) != 0) ) {
        warning("Window theme variant could not be changed");
    }
}

private int set_app_theme_variant(string app_id, string theme_variant) {
    int status = -1;
    string output;
    string error;
    Process.spawn_command_line_sync("xprop -id " + app_id + " -f _GTK_THEME_VARIANT 8u -set _GTK_THEME_VARIANT " + theme_variant, out output, out error, out status);
    return status;
}
