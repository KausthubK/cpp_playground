# CMakeList.txt : CMake project for cpp_cross_platform_skeleton, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(THIS cpp_with_gtest)
project(${THIS} CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()
add_subdirectory("thirdparty/googletest")

set(HEADER_FILES
    "Example.hpp"
)

set(Sources
    "Example.cpp"
    "main.cpp"
)

# add_library(${THIS} STATIC ${Sources} ${Headers})
add_executable(${THIS} ${Sources} ${Headers})

add_subdirectory(test)
