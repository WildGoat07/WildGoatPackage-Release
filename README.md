![img](https://github.com/WildGoat07/WildGoatPackage-Release/blob/master/logo%20x256.png)
# WildGoatPackage-Release
A little project i'm working on. Provides some helpful user friendly classes.<br/>**Requires SFML for the graphic classes**.<br/>**Works only on Windows at the moment**.

## Features

* `wp::AdvancedClock` : An extended version of `wp::Chrono` where a time factor is added.
* `wp::Animator` : An easy way to make simple animations (transformations only).
* `wp::Bezier` : A class that can create and handle basic Bezier's curve (with *n* points).
* `wp::Browser` : A class to browse and find (a) file(s) using the Windows native window (**Windows only**).
* `wp::Chrono` : A `sf::Clock` which can be paused or set its actual time.
* `wp::Color` : A fast way to convert HSLA / CMYKA / RBGA colors.
* `wp::Cursor` : An easy interface to change the mouse cursor (**Windows only**).
* `wp::Data` : A class that can store referenced values (`int`, `double`, or `std::string`).
* `wp::File` : A class to extract basic informations from a file path (name, extension, path, or absolute path for relative ones).
* `wp::FileManager` : A fast and easy way to explore files using C++.
* `wp::FolderBrowser` : Same as `wp::Browser` but for folders.
* `wp::Function` : A basic interface to create (whatever you like) functions. Some basic functions are already added. *Not very useful at the moment, future features will maybe use this*.
* `wp::Matrix` : Just a class to handle 2 dimensionnal matrix with basic operators(+, -, *) and some functions to get the inverse, minor, adjugate, ...
* `wp::RichText` : A class that can display text (like `sf::Text`) but with different colors/style in only one object (which can't be made using only one `sf::Text`).
* `wp::Variable` : A dynamic variable that can have either a constant value (still variable though) or a reference to another one inside a list of parameters. *Same as `wp::Function`, it's useless at the moment*.
* `wp::Various` : A bunch of various functions, such as a int to string converter (and string to int), a crypter (and uncrypter), calculate a vector's angle, some interpolations and way more.
* `wp::VertexAllocator` : An easy way to manage a `sf::VertexArray` to draw multiple elements like a tilemap. (Works only for quads).

## Added soon or future projects

* `wp::AnimTimeline` : A better way to use `wp::Animator` with multiple animations instead of only one movement.
* `wp::RichText` : JSON support to create even more easily beautiful and meaningful texts.
* `wp::JSON` : A general class to load JSON format.
* `wp::Gui` : A namespace where there will be added... a GUI for SFML. Very highly based on [SFGUI](https://github.com/TankOs/SFGUI) (which is already well made), this one will be more SFML-like and using only SFML Graphics.
* A wiki !! And some examples.

----

To get the alpha version, see [here](https://github.com/WildGoat07/WildGoatPackage-Alpha).
