<h1 align="center"></h1>

![Chiaroscuro Screenshot](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/overlapping_windows.png)

## What is chiaroscuro?

Chiaroscuro is a GTK variant switcher, in Elementary OS light variant is activated by default but sometimes we want to use the dark variant in specific apps. There are many ways to do that depending on the app.

- Some Elementary OS native apps have the option to swith to dark/light modes with ease using it's settings.

- Other GTK+ app launchers can be customized to be initialized with dark/light variant adding the following command before the app executable "Exec=env GTK_THEME=[theme]:[variant] [executable]"

- There are some other apps that can't be customized at least not the title bar. For these apps we can use chiaroscuro, this app overrides the title bar theme variant according that we configured.
