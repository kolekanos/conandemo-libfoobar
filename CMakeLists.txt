cmake_minimum_required(VERSION 3.20)
project(FooBar
    VERSION 0.1.0
    DESCRIPTION "Composite C library"
    HOMEPAGE_URL "https://example.com"
    LANGUAGES C
)

include(GNUInstallDirs)

set(CMAKE_FIND_PACKAGE_PREFER_CONFIG ON)
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}")

message(STATUS "CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")
message(STATUS "CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package("Foo" REQUIRED)
find_package("Bar" REQUIRED)

add_subdirectory(source)

