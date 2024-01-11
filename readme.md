<h1>Raylib Linux Core</h1>
This is a barebones setup for linux. Raylib has been precompiled for desktop targets.

To get started, follow:

https://github.com/themutti/raylib-installation

This tutorial works, but is geared for Windows, so a few things need changing. Most steps have already been completed for you, so you only really need to do the final "compilation" step, unless you want to update the compiled version of raylib.

At step 5, use make instead of mingw32-make. `make PLATFORM=PLATFORM_DESKTOP`. When you compile your project, use the `build.sh` script in this project.
