cmake_minimum_required(VERSION 3.21)
project(dictionary)

set(CMAKE_CXX_STANDARD 17)

add_executable(dictionary main.cpp Dictionary.cpp Dictionary.h)
