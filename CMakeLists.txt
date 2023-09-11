cmake_minimum_required(VERSION 3.25)
project(tmp)

set(CMAKE_CXX_STANDARD 17)

add_executable(tmp main.cpp
        buffer.h
        buffer.cpp
        int_vector.cpp
        int_vector.h)
