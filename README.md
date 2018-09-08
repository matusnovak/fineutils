# FineUtils

|         | CircleCI | TravisCI | AppVeyor |
|---------|----------|----------|----------|
| master  | [![CircleCI](https://circleci.com/gh/matusnovak/fineutils/tree/master.svg?style=svg)](https://circleci.com/gh/matusnovak/fineutils/tree/master) | [![Build Status](https://travis-ci.org/matusnovak/fineutils.svg?branch=master)](https://travis-ci.org/matusnovak/fineutils) | [![Build status](https://ci.appveyor.com/api/projects/status/7ptts9y3grin6jqs/branch/master?svg=true)](https://ci.appveyor.com/project/matusnovak/fineutils/branch/master) |
| devel  | [![CircleCI](https://circleci.com/gh/matusnovak/fineutils/tree/devel.svg?style=svg)](https://circleci.com/gh/matusnovak/fineutils/tree/devel) | [![Build Status](https://travis-ci.org/matusnovak/fineutils.svg?branch=devel)](https://travis-ci.org/matusnovak/fineutils) | [![Build status](https://ci.appveyor.com/api/projects/status/7ptts9y3grin6jqs/branch/devel?svg=true)](https://ci.appveyor.com/project/matusnovak/fineutils/branch/devel) |

*The following compilers are tested in the CI above: Visual Studio 2013, Visual Studio 2013 Win64, Visual Studio 2015, Visual Studio 2015 Win64, Visual Studio 2017, Visual Studio 2017 Win64, MinGW-w64 i686, MinGW-w64 x86_64, Linux GCC 5.5.0, Linux GCC 6.4.0, Linux GCC 5.5.0, Linux GCC 7.3.0, and OSX Clang 3.7*

## Introduction 

The FineUtils is a collections of some utils, such as: JavaScript like Promise, JavaScript like variable that can hold any data type, thread safe ring buffer, various utf-8 enabled string tokenizers, and a utf-8 enabled text wrapper. This library is mostly for my personal use, but someone else might find it useful.

**API Documentation is provided at <http://matusnovak.github.io/fineutils/>**

## Dependencies

None.

## TODO

* Better documentation with examples

## Requirements

One of the following compilers:

* (Windows) Visual Studio 2013 32-bit or 64-bit
* (Windows) Visual Studio 2015 32-bit or 64-bit
* (Windows) Visual Studio 2017 32-bit or 64-bit
* (Windows) MinGW-w64 i686
* (Windows) MinGW-w64 x86_64
* (Linux) GCC 4.9 or newer
* (OSX) Clang 3.7 or newer

## Compiling FineUtils

You can [use one of the automatically built releases from GitHub Releases](https://github.com/matusnovak/fineutils/releases) or compile it manually by following the [Install Guide](./INSTALL.md) (Don't worry, it's easy). 

## Using FineUtils

### Windows

First, compile the library (see section above), next to use the fineutils in your project, simply include the `C:/path/to/fineutils/include` and link the `fineutils.lib`. You will also need the `fineutils.dll` in order to run the application. Simply copy the DLL into the executable folder. You can find the `.lib` and `.dll` files in the cmake build folder.

### Linux/OSX

First, compile the library (see section above), next to use the fineutils in your project, simply include the `~/fineutils/include` (or `/usr/local/include` if you have installed it) and link the `fineutils.so`. You can find the `.so` files in the cmake build folder (or at the installed path provided by CMAKE_INSTALL_PREFIX).

If you are planning to distribute your application with FineUtils, you will need to copy the `fineutils.so` and include it within your application. For example, the most simple way, copy it into the executable folder (same as in Windows).

## Documentation

Documentation can be found at <http://matusnovak.github.io/fineutils/>

## Contributing

Feel free to post a question in GitHub issues. Pull requests are welcome! 

## Contact

Feel free to contact me on my email (see my GitHub profile).

## License

<https://en.wikipedia.org/wiki/MIT_License>

```
The MIT License (MIT)

Copyright (c) 2018 Matus Novak

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```