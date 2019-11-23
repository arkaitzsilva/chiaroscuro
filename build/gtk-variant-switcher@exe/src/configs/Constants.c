/* Constants.c generated by valac 0.40.18, the Vala compiler
 * generated from Constants.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS (gtk_theme_variant_switcher_configs_constants_get_type ())
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS, GtkThemeVariantSwitcherConfigsConstants))
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS, GtkThemeVariantSwitcherConfigsConstantsClass))
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_IS_CONSTANTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS))
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_IS_CONSTANTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS))
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS, GtkThemeVariantSwitcherConfigsConstantsClass))

typedef struct _GtkThemeVariantSwitcherConfigsConstants GtkThemeVariantSwitcherConfigsConstants;
typedef struct _GtkThemeVariantSwitcherConfigsConstantsClass GtkThemeVariantSwitcherConfigsConstantsClass;
typedef struct _GtkThemeVariantSwitcherConfigsConstantsPrivate GtkThemeVariantSwitcherConfigsConstantsPrivate;
typedef struct _GtkThemeVariantSwitcherConfigsParamSpecConstants GtkThemeVariantSwitcherConfigsParamSpecConstants;

struct _GtkThemeVariantSwitcherConfigsConstants {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GtkThemeVariantSwitcherConfigsConstantsPrivate * priv;
};

struct _GtkThemeVariantSwitcherConfigsConstantsClass {
	GTypeClass parent_class;
	void (*finalize) (GtkThemeVariantSwitcherConfigsConstants *self);
};

struct _GtkThemeVariantSwitcherConfigsParamSpecConstants {
	GParamSpec parent_instance;
};


static gpointer gtk_theme_variant_switcher_configs_constants_parent_class = NULL;

gpointer gtk_theme_variant_switcher_configs_constants_ref (gpointer instance);
void gtk_theme_variant_switcher_configs_constants_unref (gpointer instance);
GParamSpec* gtk_theme_variant_switcher_configs_param_spec_constants (const gchar* name,
                                                                     const gchar* nick,
                                                                     const gchar* blurb,
                                                                     GType object_type,
                                                                     GParamFlags flags);
void gtk_theme_variant_switcher_configs_value_set_constants (GValue* value,
                                                             gpointer v_object);
void gtk_theme_variant_switcher_configs_value_take_constants (GValue* value,
                                                              gpointer v_object);
gpointer gtk_theme_variant_switcher_configs_value_get_constants (const GValue* value);
GType gtk_theme_variant_switcher_configs_constants_get_type (void) G_GNUC_CONST;
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_ID "gtk-variant-switcher"
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_VERSION "0.0.1"
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_PROGRAME_NAME "Gtk Theme Variant Switcher"
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_APP_YEARS "2019"
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_APP_ICON "com.github.arkaitzsilva.gtk-variant-switcher"
#define GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_SETTINGS_APP_VARIANTS_KEY "app-theme-variants"
GtkThemeVariantSwitcherConfigsConstants* gtk_theme_variant_switcher_configs_constants_new (void);
GtkThemeVariantSwitcherConfigsConstants* gtk_theme_variant_switcher_configs_constants_construct (GType object_type);
static void gtk_theme_variant_switcher_configs_constants_finalize (GtkThemeVariantSwitcherConfigsConstants * obj);


GtkThemeVariantSwitcherConfigsConstants*
gtk_theme_variant_switcher_configs_constants_construct (GType object_type)
{
	GtkThemeVariantSwitcherConfigsConstants* self = NULL;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	self = (GtkThemeVariantSwitcherConfigsConstants*) g_type_create_instance (object_type);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return self;
#line 76 "Constants.c"
}


GtkThemeVariantSwitcherConfigsConstants*
gtk_theme_variant_switcher_configs_constants_new (void)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return gtk_theme_variant_switcher_configs_constants_construct (GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS);
#line 85 "Constants.c"
}


static void
gtk_theme_variant_switcher_configs_value_constants_init (GValue* value)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	value->data[0].v_pointer = NULL;
#line 94 "Constants.c"
}


static void
gtk_theme_variant_switcher_configs_value_constants_free_value (GValue* value)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (value->data[0].v_pointer) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		gtk_theme_variant_switcher_configs_constants_unref (value->data[0].v_pointer);
#line 105 "Constants.c"
	}
}


static void
gtk_theme_variant_switcher_configs_value_constants_copy_value (const GValue* src_value,
                                                               GValue* dest_value)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (src_value->data[0].v_pointer) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		dest_value->data[0].v_pointer = gtk_theme_variant_switcher_configs_constants_ref (src_value->data[0].v_pointer);
#line 118 "Constants.c"
	} else {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		dest_value->data[0].v_pointer = NULL;
#line 122 "Constants.c"
	}
}


static gpointer
gtk_theme_variant_switcher_configs_value_constants_peek_pointer (const GValue* value)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return value->data[0].v_pointer;
#line 132 "Constants.c"
}


static gchar*
gtk_theme_variant_switcher_configs_value_constants_collect_value (GValue* value,
                                                                  guint n_collect_values,
                                                                  GTypeCValue* collect_values,
                                                                  guint collect_flags)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (collect_values[0].v_pointer) {
#line 144 "Constants.c"
		GtkThemeVariantSwitcherConfigsConstants * object;
		object = collect_values[0].v_pointer;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		if (object->parent_instance.g_class == NULL) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 151 "Constants.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 155 "Constants.c"
		}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = gtk_theme_variant_switcher_configs_constants_ref (object);
#line 159 "Constants.c"
	} else {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = NULL;
#line 163 "Constants.c"
	}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return NULL;
#line 167 "Constants.c"
}


static gchar*
gtk_theme_variant_switcher_configs_value_constants_lcopy_value (const GValue* value,
                                                                guint n_collect_values,
                                                                GTypeCValue* collect_values,
                                                                guint collect_flags)
{
	GtkThemeVariantSwitcherConfigsConstants ** object_p;
	object_p = collect_values[0].v_pointer;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (!object_p) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 183 "Constants.c"
	}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (!value->data[0].v_pointer) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		*object_p = NULL;
#line 189 "Constants.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		*object_p = value->data[0].v_pointer;
#line 193 "Constants.c"
	} else {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		*object_p = gtk_theme_variant_switcher_configs_constants_ref (value->data[0].v_pointer);
#line 197 "Constants.c"
	}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return NULL;
#line 201 "Constants.c"
}


GParamSpec*
gtk_theme_variant_switcher_configs_param_spec_constants (const gchar* name,
                                                         const gchar* nick,
                                                         const gchar* blurb,
                                                         GType object_type,
                                                         GParamFlags flags)
{
	GtkThemeVariantSwitcherConfigsParamSpecConstants* spec;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_return_val_if_fail (g_type_is_a (object_type, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS), NULL);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return G_PARAM_SPEC (spec);
#line 221 "Constants.c"
}


gpointer
gtk_theme_variant_switcher_configs_value_get_constants (const GValue* value)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS), NULL);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return value->data[0].v_pointer;
#line 232 "Constants.c"
}


void
gtk_theme_variant_switcher_configs_value_set_constants (GValue* value,
                                                        gpointer v_object)
{
	GtkThemeVariantSwitcherConfigsConstants * old;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	old = value->data[0].v_pointer;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (v_object) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = v_object;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		gtk_theme_variant_switcher_configs_constants_ref (value->data[0].v_pointer);
#line 255 "Constants.c"
	} else {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = NULL;
#line 259 "Constants.c"
	}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (old) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		gtk_theme_variant_switcher_configs_constants_unref (old);
#line 265 "Constants.c"
	}
}


void
gtk_theme_variant_switcher_configs_value_take_constants (GValue* value,
                                                         gpointer v_object)
{
	GtkThemeVariantSwitcherConfigsConstants * old;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	old = value->data[0].v_pointer;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (v_object) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = v_object;
#line 287 "Constants.c"
	} else {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		value->data[0].v_pointer = NULL;
#line 291 "Constants.c"
	}
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (old) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		gtk_theme_variant_switcher_configs_constants_unref (old);
#line 297 "Constants.c"
	}
}


static void
gtk_theme_variant_switcher_configs_constants_class_init (GtkThemeVariantSwitcherConfigsConstantsClass * klass)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	gtk_theme_variant_switcher_configs_constants_parent_class = g_type_class_peek_parent (klass);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	((GtkThemeVariantSwitcherConfigsConstantsClass *) klass)->finalize = gtk_theme_variant_switcher_configs_constants_finalize;
#line 309 "Constants.c"
}


static void
gtk_theme_variant_switcher_configs_constants_instance_init (GtkThemeVariantSwitcherConfigsConstants * self)
{
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	self->ref_count = 1;
#line 318 "Constants.c"
}


static void
gtk_theme_variant_switcher_configs_constants_finalize (GtkThemeVariantSwitcherConfigsConstants * obj)
{
	GtkThemeVariantSwitcherConfigsConstants * self;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_THEME_VARIANT_SWITCHER_CONFIGS_TYPE_CONSTANTS, GtkThemeVariantSwitcherConfigsConstants);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_signal_handlers_destroy (self);
#line 330 "Constants.c"
}


GType
gtk_theme_variant_switcher_configs_constants_get_type (void)
{
	static volatile gsize gtk_theme_variant_switcher_configs_constants_type_id__volatile = 0;
	if (g_once_init_enter (&gtk_theme_variant_switcher_configs_constants_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { gtk_theme_variant_switcher_configs_value_constants_init, gtk_theme_variant_switcher_configs_value_constants_free_value, gtk_theme_variant_switcher_configs_value_constants_copy_value, gtk_theme_variant_switcher_configs_value_constants_peek_pointer, "p", gtk_theme_variant_switcher_configs_value_constants_collect_value, "p", gtk_theme_variant_switcher_configs_value_constants_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (GtkThemeVariantSwitcherConfigsConstantsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gtk_theme_variant_switcher_configs_constants_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GtkThemeVariantSwitcherConfigsConstants), 0, (GInstanceInitFunc) gtk_theme_variant_switcher_configs_constants_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType gtk_theme_variant_switcher_configs_constants_type_id;
		gtk_theme_variant_switcher_configs_constants_type_id = g_type_register_fundamental (g_type_fundamental_next (), "GtkThemeVariantSwitcherConfigsConstants", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&gtk_theme_variant_switcher_configs_constants_type_id__volatile, gtk_theme_variant_switcher_configs_constants_type_id);
	}
	return gtk_theme_variant_switcher_configs_constants_type_id__volatile;
}


gpointer
gtk_theme_variant_switcher_configs_constants_ref (gpointer instance)
{
	GtkThemeVariantSwitcherConfigsConstants * self;
	self = instance;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	g_atomic_int_inc (&self->ref_count);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	return instance;
#line 359 "Constants.c"
}


void
gtk_theme_variant_switcher_configs_constants_unref (gpointer instance)
{
	GtkThemeVariantSwitcherConfigsConstants * self;
	self = instance;
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		GTK_THEME_VARIANT_SWITCHER_CONFIGS_CONSTANTS_GET_CLASS (self)->finalize (self);
#line 1 "/media/alienware/DATOS/Google Drive/Desarrollo/Proyectos/ValaProjects/gtk-variant-switcher/src/configs/Constants.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 374 "Constants.c"
	}
}



