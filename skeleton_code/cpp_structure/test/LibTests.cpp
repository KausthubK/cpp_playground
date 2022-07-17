#include <gtest/gtest.h>
#include "../src/Lib.h"

TEST(LibTests, TestBools){
    ASSERT_TRUE(true);
}

TEST(LibTests, TestAdd){
    int a = 2;
    int b = 5;
    ASSERT_EQ(add(a, a), 4);
    ASSERT_EQ(add(a, b), 7);
    ASSERT_EQ(add(b, b), 10);
    // ASSERT_EQ(add(b, b), 22);
}