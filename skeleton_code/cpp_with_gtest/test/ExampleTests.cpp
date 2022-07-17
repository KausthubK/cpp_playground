#include <gtest/gtest.h>

TEST(ExampleTests, TestPass){
    EXPECT_TRUE(true);
    ASSERT_TRUE(true);
}

// TEST(ExampleTests, TestFail){
//     EXPECT_TRUE(false);
//     ASSERT_TRUE(false);
// }

TEST(ExampleTests, TestAdd){
    ASSERT_EQ(true, true);
}