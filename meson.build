project('gtk-variant-switcher', 'vala', 'c')

add_global_arguments('-DWNCK_I_KNOW_THIS_IS_UNSTABLE', language : 'c')
add_project_arguments(['-DGETTEXT_PACKAGE="@0@"'.format(meson.project_name())], language: 'c')

i18n = import('i18n')

subdir('src')

dependencies = [
    dependency('gtk+-3.0'),
    dependency('libwnck-3.0')
]

executable(
	meson.project_name(),
	sources,
	dependencies: dependencies,
	install: true
)

subdir('data')

meson.add_install_script('meson/post_install.py')
