cmake_minimum_required(VERSION 3.20)
project(Lab2D LANGUAGES CXX)

option(ENABLE_LIBA "Build libA" ON)
option(ENABLE_LIBB "Build libB" ON)
option(ENABLE_LIBC "Build libC" ON)

if(ENABLE_LIBA)
    add_subdirectory(libA)
endif()

if(ENABLE_LIBB)
    add_subdirectory(libB)
endif()

if(ENABLE_LIBC)
    add_subdirectory(libC)
endif()

add_subdirectory(app)
