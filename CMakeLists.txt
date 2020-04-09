cmake_minimum_required(VERSION 3.7.2)
project(SPIScreenProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(SPIScreenProject main.cpp CMainScreen.cpp CMainScreen.h driver/sh1106.c driver/sh1106.h CController.cpp CController.h CButtons.cpp CButtons.h CGlobalParams.h FontTimesNewRoman_10pt.c FontTimesNewRoman_10pt.h)

target_link_libraries(SPIScreenProject wiringPi)