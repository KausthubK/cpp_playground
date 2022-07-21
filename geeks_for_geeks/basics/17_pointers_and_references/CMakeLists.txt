# CMakeList.txt : CMake project for cpp_cross_platform_skeleton, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (pointers_and_references)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source to this project's executable.
add_executable (pnr "pnr.cpp")

# TODO: Add tests and install targets if needed.
