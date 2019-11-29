<h1 align="center">Chiaroscuro</h1>

![Chiaroscuro Screenshot](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/overlapping_windows.png)

## What is chiaroscuro?

Chiaroscuro is a GTK variant switcher, in Elementary OS light variant is activated by default but sometimes we want to use the dark variant in specific apps. There are many ways to do that depending on the app.

- Some Elementary OS native apps have the option to switch to dark/light modes with ease using it's settings.

- Other GTK+ app launchers can be customized to be initialized with dark/light variant adding the following command before the app executable "Exec=env GTK_THEME=[theme]:[variant] [executable]".

- There are some other apps that can't be customized at least not the title bar. For these apps we can use chiaroscuro, this app overrides the title bar theme variant according to what we configured.

Steps:

1) Download the code from GitHub and go to project main folder and execute "./app install" from command line to build and install the app.

2) Exec the following command in terminal "xprop WM_CLASS" and select the window you want to configure, you will see the window information, copy the second value.
![Settings Screenshot 1](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_1.png)
3) Open dconf editor and go to com.github.arkaitzsilva.chiaroscuro settings and add new value like "('App name to be identified by user', 'App window group from previous step', 'variant of window group light/dark')".
![Settings Screenshot 2](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_2.png)
4) Start the daemon at startup.
![Settings Screenshot 3](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/step_3.png)

IntelliJ Java IDE is an example of chiaroscuro configurable app, configuring chiaroscuro with the dark variant for this app the title bar integrates perfectly with Darcula theme and you can still use the default light theme as default theme in the rest of apps.
![Settings Screenshot 3](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/light.png)
![Settings Screenshot 3](https://github.com/arkaitzsilva/chiaroscuro/blob/master/data/images/dark.png)
