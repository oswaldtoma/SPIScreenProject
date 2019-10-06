cmake_minimum_required(VERSION 3.7.2)
project(screen)

set(CMAKE_CXX_STANDARD 14)

add_executable(screen main.cpp testScreen.cpp testScreen.h)

find_package(WiringPi REQUIRED)
find_package(Threads REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

target_link_libraries(heaterController ${WIRINGPI_LIBRARIES})
target_link_libraries(heaterController ${CMAKE_THREAD_LIBS_INIT})