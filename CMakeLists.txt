cmake_minimum_required(VERSION 3.21)
project(BSUIR_SFIS)

set(CMAKE_CXX_STANDARD 14)

add_executable(BSUIR_SFIS main.cpp graphics_functions.cpp graphics_functions.h sets_functions.cpp sets_functions.h Match.cpp Match.h)
