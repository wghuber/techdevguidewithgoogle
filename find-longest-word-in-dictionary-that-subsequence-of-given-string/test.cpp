//
// Created by willi on 05.03.20.
//

#include <gtest/gtest.h>

#include "lib/lib.h"

TEST(message_test,content)
{
   EXPECT_TRUE(
      my_func("abppplee", {"able", "ale", "apple", "bale", "kangaroo"}));
}