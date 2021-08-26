# conandemo-libfoobar
Composite C library

# Build steps

```bash
$ mkdir build && cd build
$ conan install .. -pr:h profile-k -pr:b profile-k
Configuration (profile_host):
[settings]
arch=x86_64
build_type=Release
compiler=gcc
compiler.libcxx=libstdc++11
compiler.version=10
os=Windows
[options]
[build_requires]
[env]

Configuration (profile_build):
[settings]
arch=x86_64
build_type=Release
compiler=gcc
compiler.libcxx=libstdc++11
compiler.version=10
os=Windows
[options]
[build_requires]
[env]

conanfile.txt: Installing package
Requirements
    Bar/0.1.0@kolekanos/testing from local cache - Cache
    Foo/0.1.0@kolekanos/testing from local cache - Cache
Packages
    Bar/0.1.0@kolekanos/testing:c6817f477abe7e9a917b102f37dc1fd0c2d95f50 - Cache
    Foo/0.1.0@kolekanos/testing:5ab84d6acfe1f23c4fae0ab88f26e3a396351ac9 - Cache

Installing (downloading, building) binaries...
Bar/0.1.0@kolekanos/testing: Already installed!
Foo/0.1.0@kolekanos/testing: Already installed!
conanfile.txt: Generator 'CMakeDeps' calling 'generate()'
conanfile.txt: Generator txt created conanbuildinfo.txt
conanfile.txt: Generator virtualenv created activate.bat
conanfile.txt: Generator virtualenv created deactivate.bat
conanfile.txt: Generator virtualenv created environment.bat.env
conanfile.txt: Generator virtualenv created activate.ps1
conanfile.txt: Generator virtualenv created deactivate.ps1
conanfile.txt: Generator virtualenv created environment.ps1.env
conanfile.txt: Generator virtualenv created activate.sh
conanfile.txt: Generator virtualenv created deactivate.sh
conanfile.txt: Generator virtualenv created environment.sh.env
conanfile.txt: Aggregating env generators
conanfile.txt: Generated conaninfo.txt
conanfile.txt: Generated graphinfo
$ source activate.sh
$ cmake .. -G "MSYS Makefiles" -DCMAKE_INSTALL_PREFIX=$PWD/../install -DCMAKE_VERBOSE_MAKEFILE=ON
-- The C compiler identification is GNU 10.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/msys64/mingw64/bin/gcc.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- CMAKE_PREFIX_PATH = C:/msys64/home/kolekanos/conandemo-libfoobar/build
-- CMAKE_MODULE_PATH = C:/msys64/home/kolekanos/conandemo-libfoobar/build
-- Conan: Target declared 'Foo::Foo'
-- Conan: Target declared 'Bar::Bar'
-- Configuring done
-- Generating done
-- Build files have been written to: C:/msys64/home/kolekanos/conandemo-libfoobar/build
$ cmake --build .
/C/msys64/mingw64/bin/cmake.exe -S/C/msys64/home/kolekanos/conandemo-libfoobar -B/C/msys64/home/kolekanos/conandemo-libfoobar/build --check-build-system CMakeFiles/Makefile.cmake 0
/C/msys64/mingw64/bin/cmake.exe -E cmake_progress_start /C/msys64/home/kolekanos/conandemo-libfoobar/build/CMakeFiles /C/msys64/home/kolekanos/conandemo-libfoobar/build//CMakeFiles/progress.marks
/usr/bin/make  -f CMakeFiles/Makefile2 all
make[1]: Entering directory '/home/kolekanos/conandemo-libfoobar/build'
/usr/bin/make  -f source/CMakeFiles/FooBar.dir/build.make source/CMakeFiles/FooBar.dir/depend
make[2]: Entering directory '/home/kolekanos/conandemo-libfoobar/build'
/C/msys64/mingw64/bin/cmake.exe -E cmake_depends "MSYS Makefiles" /C/msys64/home/kolekanos/conandemo-libfoobar /C/msys64/home/kolekanos/conandemo-libfoobar/source /C/msys64/home/kolekanos/conandemo-libfoobar/build /C/msys64/home/kolekanos/conandemo-libfoobar/build/source /C/msys64/home/kolekanos/conandemo-libfoobar/build/source/CMakeFiles/FooBar.dir/DependInfo.cmake --color=
make[2]: Leaving directory '/home/kolekanos/conandemo-libfoobar/build'
/usr/bin/make  -f source/CMakeFiles/FooBar.dir/build.make source/CMakeFiles/FooBar.dir/build
make[2]: Entering directory '/home/kolekanos/conandemo-libfoobar/build'
[ 50%] Building C object source/CMakeFiles/FooBar.dir/foobar.c.obj
cd /C/msys64/home/kolekanos/conandemo-libfoobar/build/source && /C/msys64/mingw64/bin/gcc.exe  -I/C/msys64/home/kolekanos/conandemo-libfoobar/include  -MD -MT source/CMakeFiles/FooBar.dir/foobar.c.obj -MF CMakeFiles/FooBar.dir/foobar.c.obj.d -o CMakeFiles/FooBar.dir/foobar.c.obj -c /C/msys64/home/kolekanos/conandemo-libfoobar/source/foobar.c
C:/msys64/home/kolekanos/conandemo-libfoobar/source/foobar.c:1:10: fatal error: foo/foo.h: No such file or directory
    1 | #include <foo/foo.h>
      |          ^~~~~~~~~~~
compilation terminated.
make[2]: *** [source/CMakeFiles/FooBar.dir/build.make:79: source/CMakeFiles/FooBar.dir/foobar.c.obj] Error 1
make[2]: Leaving directory '/home/kolekanos/conandemo-libfoobar/build'
make[1]: *** [CMakeFiles/Makefile2:101: source/CMakeFiles/FooBar.dir/all] Error 2
make[1]: Leaving directory '/home/kolekanos/conandemo-libfoobar/build'
make: *** [Makefile:139: all] Error 2
```

with `profile-k`:

```ini
[settings]
os=Windows
arch=x86_64
compiler=gcc
compiler.version=10
compiler.libcxx=libstdc++11
build_type=Release
[options]
[build_requires]
[env]
```

