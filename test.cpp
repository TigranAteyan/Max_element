#include <stdio.h>
#include <gtest/gtest.h>
#include "func.h"

TEST(MaxElementTest, SingleElement) {
    int arr[] = {42};
    EXPECT_EQ(max_element(arr, 1), 42);
}

TEST(MaxElementTest, MaxAtEnd) {
    int arr[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(max_element(arr, 5), 5);
}

TEST(MaxElementTest, MaxAtStart) {
    int arr[] = {10, 3, 2, 1};
    EXPECT_EQ(max_element(arr, 4), 10);
}

TEST(MaxElementTest, MaxInMiddle) {
    int arr[] = {1, 7, 3, 2};
    EXPECT_EQ(max_element(arr, 4), 7);
}

TEST(MaxElementTest, AllSameElements) {
    int arr[] = {5, 5, 5, 5};
    EXPECT_EQ(max_element(arr, 4), 5);
}

TEST(MaxElementTest, NegativeNumbers) {
    int arr[] = {-3, -1, -7, -4};
    EXPECT_EQ(max_element(arr, 4), -1);
}

TEST(MaxElementTest, MixedNumbers) {
    int arr[] = {-10, 4, -2, 9, -1};
    EXPECT_EQ(max_element(arr, 5), 9);
}

TEST(MaxElementTest, ZeroInArray) {
    int arr[] = {-5, 0, -3, -1};
    EXPECT_EQ(max_element(arr, 4), 0);
}



