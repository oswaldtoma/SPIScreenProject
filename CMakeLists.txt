cmake_minimum_required(VERSION 3.7.2)
project(screen)

set(CMAKE_CXX_STANDARD 14)

add_executable(screen main.cpp CMainScreen.cpp CMainScreen.h driver/sh1106.c driver/sh1106.h CController.cpp CController.h CButtons.cpp CButtons.h CGlobalParams.h)

target_link_libraries(screen wiringPi)