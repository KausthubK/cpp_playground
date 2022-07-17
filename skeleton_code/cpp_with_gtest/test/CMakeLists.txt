cmake_minimum_required (VERSION 3.8)

set(THIS ExampleTests)

set(Sources
    ExampleTests.cpp
)

add_executable(${THIS} ${Sources})

target_link_libraries(${THIS} PUBLIC
    gtest_main
)

add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)