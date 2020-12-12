#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <mymath.hpp>

TEST_CASE("square_by_refrence")
{
    int x = 5;
    REQUIRE(freelance::MyMath::square_by_refrence(x) == 25);
}
TEST_CASE("in_place_square")
{
    int x = 5;
    freelance::MyMath::in_place_square(x);
    REQUIRE(x == 25);
}
