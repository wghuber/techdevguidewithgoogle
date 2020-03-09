//
// Created by willi on 05.03.20.
//

#include <gtest/gtest.h>

#include "lib/lib.h"

TEST(one_matching, word) {
  EXPECT_EQ("able",
            my_func("abppplee", {"able"}));
}

TEST(third_matching, words) {
  EXPECT_EQ("apple",
            my_func("abppplee", {"able", "ale", "apple", "bale", "kangaroo"}));
}
