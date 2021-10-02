#include <gtest/gtest.h>
#include <limits>
#include <math.h>
#include "PidController.hpp"

PidController pidController;

TEST(pidControllerTest, boundedOutput) {
  double max = std::numeric_limits<double>::infinity();
  ASSERT_GT(pidController.Compute(max), 1000);
}

TEST(pidControllerTest, expectedValue) {
  ASSERT_EQ(pidController.Compute(10), 10.0);
}

TEST(pidControllerTest, testdt) {
  EXPECT_GT(pidController.getdt(), 0);
}
