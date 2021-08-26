cmake_minimum_required(VERSION 3.20)
project(FooBar
    VERSION 0.1.0
    DESCRIPTION "Composite C library"
    HOMEPAGE_URL "https://example.com"
    LANGUAGES C
)

include(GNUInstallDirs)

message(STATUS "CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")
message(STATUS "CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package("Foo" REQUIRED)
find_package("Bar" REQUIRED)

add_subdirectory(source)

