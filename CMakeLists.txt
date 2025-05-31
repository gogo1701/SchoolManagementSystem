cmake_minimum_required(VERSION 3.31)
project(SchoolManagementSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(SchoolManagementSystem main.cpp
        Person.cpp
        Person.h)
