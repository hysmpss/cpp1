#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------


TEST(Reverse, example) {
  std::vector<int> inputs = {1, 2, 3, 4};
  std::vector<int> outputs = {4, 3, 2, 1};
  EXPECT_EQ(Reverse(inputs), outputs);
}
