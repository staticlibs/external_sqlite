SQLite library build for Staticlibs
===================================

This project is a part of [Staticlibs](http://staticlibs.net/).

This project contains a CMake wrapper for the [sqlite library](https://www.sqlite.org/). 
Wrapper uses `Makefile`s for each supported platform, supports toolchain specification
with `STATICLIB_TOOLCHAIN` option and exports sqlite headers to be used from dependent projects.

[SQLite unofficial GitHub repository](https://github.com/mackyle/sqlite) is used as a git submodule of this project.
SQLite pinned to version 3.8.8.2.

Link to [API documentation](https://www.sqlite.org/c3ref/intro.html).

How to build
------------

[CMake](http://cmake.org/) is required for building.

Staticlib toolchain name must be specified as a `STATICLIB_TOOLCHAIN` parameter to `cmake` command
unless you are using GCC on Linux x86_64 (`linux_amd64_gcc` toolchain) that is default.

List of [supported toolchains](https://github.com/staticlibs/cmake/tree/master/toolchains).

Example build for Windows x86_64 with Visual Studio 2013 Express, run the following commands 
from the development shell `C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts\VS2013 x64 Cross Tools Command Prompt` :

    git clone https://github.com/staticlibs/external_sqlite.git
    cd external_sqlite
    git submodule update --init --recursive
    mkdir build
    cd build
    cmake .. -DSTATICLIB_TOOLCHAIN=windows_amd64_msvc -G "NMake Makefiles"
    nmake
    nmake test

GNU Awk and Tcl/Tk are required for builds on Windows.

License information
-------------------

This project is released under the [Apache License 2.0](http://www.apache.org/licenses/LICENSE-2.0)

Changelog
---------

**2015-06-30**

 * version 3.8.8.2.1 - toolchains update, minor fixes

**2015-05-22**

 * 3.8.8.2, initial public version
