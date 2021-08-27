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
conanfile.txt: Generator virtualenv created activate.bat
conanfile.txt: Generator virtualenv created deactivate.bat
conanfile.txt: Generator virtualenv created environment.bat.env
conanfile.txt: Generator virtualenv created activate.ps1
conanfile.txt: Generator virtualenv created deactivate.ps1
conanfile.txt: Generator virtualenv created environment.ps1.env
conanfile.txt: Generator virtualenv created activate.sh
conanfile.txt: Generator virtualenv created deactivate.sh
conanfile.txt: Generator virtualenv created environment.sh.env
conanfile.txt: Generator 'CMakeDeps' calling 'generate()'
conanfile.txt: Generator txt created conanbuildinfo.txt
conanfile.txt: Generator 'CMakeToolchain' calling 'generate()'
conanfile.txt: Aggregating env generators
conanfile.txt: Generated conaninfo.txt
conanfile.txt: Generated graphinfo
$ source activate.sh
$ cmake .. -G "MSYS Makefiles" -DCMAKE_INSTALL_PREFIX=$PWD/../install -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
Using Conan toolchain through conan_toolchain.cmake.
-- The C compiler identification is GNU 10.3.0
-- Detecting C compiler ABI info
Using Conan toolchain through .
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
[ 50%] Building C object source/CMakeFiles/FooBar.dir/foobar.c.obj
[100%] Linking C static library libFooBar.a
[100%] Built target FooBar
$ cmake --install .
-- Install configuration: "Release"
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/lib/libFooBar.a
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/share/FooBar/cmake/FooBarTargets.cmake
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/share/FooBar/cmake/FooBarTargets-release.cmake
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/share/FooBar/cmake/FooBarConfig.cmake
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/share/FooBar/cmake/FooBarConfigVersion.cmake
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/include
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/include/foobar
-- Installing: C:/msys64/home/kolekanos/conandemo-libfoobar/install/include/foobar/foobar.h
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

