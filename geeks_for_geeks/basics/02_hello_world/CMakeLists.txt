cmake_minimum_required(VERSION 3.16.0)
project("hello-world")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable("${PROJECT_NAME}" hello-world.cpp)
