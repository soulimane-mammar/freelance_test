#include <gtest/gtest.h>
#include <mymath.hpp>
TEST(Freelance, square_by_refrence)
{
    int x = 5;
    ASSERT_EQ(freelance::MyMath::square_by_refrence(x), 25);
};
TEST(Freelance, in_place_square)
{
    int x = 5;
    freelance::MyMath::in_place_square(x);
    ASSERT_EQ(x, 25);
}
