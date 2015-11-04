SQLite library build for Staticlibs
===================================

This project is a part of [Staticlibs](http://staticlibs.net/).

This project contains a CMake wrapper for the [sqlite library](https://www.sqlite.org/). 
Wrapper uses `Makefile`s for each supported platform.

[SQLite unofficial GitHub repository](https://github.com/mackyle/sqlite) is used as a git submodule of this project.
SQLite pinned to version 3.8.8.2.

Link to [API documentation](https://www.sqlite.org/c3ref/intro.html).

How to build
------------

[CMake](http://cmake.org/) is required for building.

[GNU Awk](https://www.gnu.org/software/gawk/) and [Tcl/Tk](http://www.tcl.tk/) are also required for building,
Windows users can obtain ready-to-use distributions from [tools_windows_awk](https://github.com/staticlibs/tools_windows_awk)
and [tools_windows_tcl](https://github.com/staticlibs/tools_windows_tcl) repositories.

To build the library on Windows using Visual Studio 2013 Express run the following commands using
Visual Studio development command prompt 
(`C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts\VS2013 x86 Native Tools Command Prompt`):

    git clone --recursive https://github.com/staticlibs/external_sqlite.git
    cd external_sqlite
    mkdir build
    cd build
    cmake .. -DSTATICLIB_TOOLCHAIN=windows_i386_msvc
    msbuild external_sqlite.sln

See [StaticlibsToolchains](https://github.com/staticlibs/wiki/wiki/StaticlibsToolchains) for 
more information about the toolchain setup and cross-compilation.

License information
-------------------

This project is released under the [Apache License 2.0](http://www.apache.org/licenses/LICENSE-2.0).

Changelog
---------

**2015-11-04**

 * version 3.8.8.2.3 - `pkg-config` integration

**2015-07-08**

 * version 3.8.8.2.2 - toolchains update

**2015-06-30**

 * version 3.8.8.2.1 - toolchains update, minor fixes

**2015-05-22**

 * 3.8.8.2, initial public version
