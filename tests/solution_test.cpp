#include <gtest/gtest.h>
#include "solution.hpp"

TEST(SolutionTest, PositiveInput) {
    EXPECT_EQ(solve(5), 25);
    EXPECT_EQ(solve(0), 0);
}

TEST(SolutionTest, ZeroInput) {
    EXPECT_EQ(solve(0), 0);
}

TEST(SolutionTest, NegativeInput) {
    EXPECT_EQ(solve(-3), 9);
}