#cmake_minimum_required(VERSION 3.14)
cmake_minimum_required(VERSION 3.5)
project(eSNN_RTAD)

set(CMAKE_CXX_STANDARD 14)

add_executable(eSNN_RTAD main.cpp eSNN.h eSNN.cpp)