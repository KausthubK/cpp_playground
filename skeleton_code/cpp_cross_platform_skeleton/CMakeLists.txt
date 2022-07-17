# CMakeList.txt : CMake project for cpp_cross_platform_skeleton, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (cpp_cross_platform_skeleton)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(HEADER_FILES
    "headers/cpp_cross_platform_skeleton.h"
)

set(Sources
    "src/cpp_cross_platform_skeleton.cpp"
)

include_directories(
    headers
)

# Add source to this project's executable.
add_executable(cpp_cross_platform_skeleton ${Sources} ${HEADER_FILES})
# add_executable (cpp_cross_platform_skeleton "src/cpp_cross_platform_skeleton.cpp" "src/cpp_cross_platform_skeleton.h")

# TODO: Add tests and install targets if needed.
