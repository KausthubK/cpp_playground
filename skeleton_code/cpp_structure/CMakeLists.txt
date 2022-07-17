cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_NAME cpp_structure)
project(${PROJECT_NAME})

set(SRC_DIR src)
set(SRC_FILES
    ${SRC_DIR}/main.cpp
)
set(LIB_FILES
    ${SRC_DIR}/Lib.cpp
)
set(HEADER_FILES
    ${SRC_DIR}/Lib.h
)

set(LIBRARY_NAME ${PROJECT_NAME}_lib)

# Name of executable
add_library(${LIBRARY_NAME} ${LIB_FILES})
add_executable(${PROJECT_NAME} ${SRC_FILES})
# Link
target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

##################
## Test setup

## Enabling Tests
enable_testing()

## Downloading googletest dependency
find_package(GTest REQUIRED)

## Test Definition & Build

set(TEST_NAME LibTests)
set(TEST_DIR test)
set(TEST_FILES
    ${TEST_DIR}/LibTests.cpp
)
add_executable(${TEST_NAME} ${TEST_FILES} ${HEADER_FILES} ${LIB_FILES})
# target_link_libraries(${TEST_NAME} PUBLIC gtest_main)
target_link_libraries(${TEST_NAME} PUBLIC GTest::GTest gtest_main)
add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
