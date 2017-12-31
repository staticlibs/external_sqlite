SQLite library build for Staticlibs
===================================

[![travis](https://travis-ci.org/staticlibs/external_sqlite.svg?branch=master)](https://travis-ci.org/staticlibs/external_sqlite)
[![appveyor](https://ci.appveyor.com/api/projects/status/github/staticlibs/external_sqlite?svg=true)](https://ci.appveyor.com/project/staticlibs/external-sqlite)

This project is a part of [Staticlibs](http://staticlibs.net/).

This project contains a CMake wrapper for the [sqlite library](https://www.sqlite.org/). 
SQLite sources [amalgamation](https://sqlite.org/amalgamation.html) included inside `sqlite` directory.

Link to the [API documentation](https://www.sqlite.org/c3ref/intro.html).

How to build
------------

[CMake](http://cmake.org/) is required for building.

To build the library on Windows using Visual Studio 2013 Express run the following commands using
Visual Studio development command prompt 
(`C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts\VS2013 x86 Native Tools Command Prompt`):

    git clone https://github.com/staticlibs/external_sqlite.git
    cd external_sqlite
    mkdir build
    cd build
    cmake ..
    msbuild external_sqlite.sln

See [StaticlibsToolchains](https://github.com/staticlibs/wiki/wiki/StaticlibsToolchains) for 
more information about the toolchain setup and cross-compilation.

License information
-------------------

This project is released under the [Apache License 2.0](http://www.apache.org/licenses/LICENSE-2.0).

Changelog
---------

**2017-12-31**

 * version 3.15.0-2
 * vs2017 support

**2016-10-27**

 * version 3.15.0-1
 * include SQLite amalgamation in-tree instead of using submodule

**2016-01-16**

 * version 3.8.8.2.5
 * minor CMake changes

**2015-11-10**

 * version 3.8.8.2.4
 * separate `configure` and `build` stages for `Makefile` builds

**2015-11-04**

 * version 3.8.8.2.3 - `pkg-config` integration

**2015-07-08**

 * version 3.8.8.2.2 - toolchains update

**2015-06-30**

 * version 3.8.8.2.1 - toolchains update, minor fixes

**2015-05-22**

 * 3.8.8.2, initial public version
