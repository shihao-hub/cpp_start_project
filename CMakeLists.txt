cmake_minimum_required(VERSION 3.28)
project(cpp_start_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_start_project main.cpp
        Dictionary/Dictionary.cpp
        Hashtable/Hashtable.cpp)
