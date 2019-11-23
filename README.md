<h1 align="center">Chiaroscuro</h1>

![Chiaroscuro Screenshot](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/overlapping_windows.png)

## What is chiaroscuro?

Chiaroscuro is a GTK variant switcher, in Elementary OS light variant is activated by default but sometimes we want to use the dark variant in specific apps. There are many ways to do that depending on the app.

- Some Elementary OS native apps have the option to switch to dark/light modes with ease using it's settings.

- Other GTK+ app launchers can be customized to be initialized with dark/light variant adding the following command before the app executable "Exec=env GTK_THEME=[theme]:[variant] [executable]".

- There are some other apps that can't be customized at least not the title bar. For these apps we can use chiaroscuro, this app overrides the title bar theme variant according to what we configured.

Steps:

1) Exec the following command in terminal "xprop WM_CLASS" and select the window you want to configure, you will see the window information, copy the second value.
![Settings Screenshot 1](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_1.png)
2) Open dconf editor and go to com.github.arkaitzsilva.chiaroscure settings and add new value like "('App name to be identified by user', 'App window group from step 1', 'variant of window group light/dark')".
![Settings Screenshot 2](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_2.png)
3) Start the daemon at startup.
![Settings Screenshot 3](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_3.png)
