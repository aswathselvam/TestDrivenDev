// Copyright 2021 Aswath Muthuselvam

#include <gtest/gtest.h>
#include <limits>
#include <cmath>
#include <PidController.hpp>

PidController pidController;

// New object is initialized with custom constructor
// to be included for code coverage.
PidController pidController1(1, 2, 3, 1);

/**
 * @brief Test for bounded output, given a large input
 */
TEST(pidControllerTest, boundedOutput) {
    ASSERT_LT(pidController.Compute(500), 1000);
}
/**
 * @brief Test for checking if the formula 
 * is implemented correctly
 */
TEST(pidControllerTest, expectedValue) {
    ASSERT_EQ(pidController.Compute(10), 10.0);
}
/**
 * @brief Test for checking if dt is initialized with 
 * non-zero and positive value
 */
TEST(pidControllerTest, testdt) {
    EXPECT_GT(pidController.getdt(), 0);
}
