cmake_minimum_required(VERSION 3.7.2)
project(screen)

set(CMAKE_CXX_STANDARD 14)

add_executable(screen main.cpp testScreen.cpp testScreen.h driver/sh1106.c driver/sh1106.h)

target_link_libraries(screen wiringPi)