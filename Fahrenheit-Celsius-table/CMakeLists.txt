cmake_minimum_required(VERSION 3.5)
project(Fahrenheit_Celsius_table)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(Fahrenheit_Celsius_table ${SOURCE_FILES})