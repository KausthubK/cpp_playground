cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_NAME cpp_structure)
project(${PROJECT_NAME})

set(SRC_DIR src)
set(LIBS_DIR libs)
set(TEST_DIR test)

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

# # Where any include files are
# include_directories(include)

# Name of executable
add_library(${LIBRARY_NAME} ${LIB_FILES})
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Link
target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

# Subdirectories to build
enable_testing()
add_subdirectory(${LIBS_DIR}/googletest)
# add_subdirectory(${TEST_DIR})

#### Tests

set(TEST_NAME LibTests)

set(TEST_FILES
    test/LibTests.cpp
)

# include(${LIBRARY_NAME})
add_executable(${TEST_NAME} ${TEST_FILES} ${HEADER_FILES} ${LIB_FILES})
# add_executable(${TEST_NAME} ${TEST_FILES} ${HEADER_FILES})
target_link_libraries(${TEST_NAME} PUBLIC
    gtest_main
)

add_test(
    NAME ${TEST_NAME}
    COMMAND ${TEST_NAME}
)