#include <gtest/gtest.h>

#include "box_capacity.h"

TEST(test_01, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(0, 0, 0), 0);
}

TEST(test_02, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(1.3, 1.3, 1.3), 0);
}

TEST(test_03, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(1.34, 1.34, 1.34), 1);
}

TEST(test_04, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(3, 5, 6), 24);
}

TEST(test_05, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(10, 0, 10), 0);
    EXPECT_EQ(TimatyPizza::boxCapacity(0, 10, 10), 0);
    EXPECT_EQ(TimatyPizza::boxCapacity(10, 10, 0), 0);
}

TEST(test_06, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(-10, 11, 15), -1);
    EXPECT_EQ(TimatyPizza::boxCapacity(10, -11, 15), -1);
    EXPECT_EQ(TimatyPizza::boxCapacity(10, 11, -15), -1);
}

TEST(test_07, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(-10, 11, -15), -1);
    EXPECT_EQ(TimatyPizza::boxCapacity(10, -11, -15), -1);
    EXPECT_EQ(TimatyPizza::boxCapacity(-10, -11, 15), -1);
}

TEST(test_08, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(-10, -11, -15), -1);
}

TEST(test_09, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(10.5, 8.25, 9.75), 294);
}

TEST(test_10, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(0.1, 0.1, 0.1), 0);
}

TEST(test_11, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(10, 15, 20), 1155);
}

TEST(test_12, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(100.0, 50.0, 30.0), 61050);
}

TEST(test_13, box_capacity_test_set)
{
    EXPECT_EQ(TimatyPizza::boxCapacity(10000, 10000, 10000), 421875000000);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}