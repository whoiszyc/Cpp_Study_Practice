cmake_minimum_required(VERSION 3.2)
project(gurobitest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(
    test
    exam_1.cpp
)
