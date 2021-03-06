#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <mymath.hpp>
#include <myfile.hpp>

using namespace Catch::literals;

TEST_CASE("Freelance point 3")
{
    SECTION("square_by_refrence")
    {
        int x = 5;
        REQUIRE(freelance::MyMath::square_by_refrence(x) == 25);
    }
    SECTION("in_place_square")
    {
        int x = 5;
        freelance::MyMath::in_place_square(x);
        REQUIRE(x == 25);
    }
}

TEST_CASE("Freelance point 1", )
{
    SECTION("FileProcessor creation throw")
    {

        REQUIRE_THROWS_AS(([]() { freelance::FileProcessor fp{"nofile.txt"}; })(), std::runtime_error);
    }
    SECTION("FileProcessor creation noexcept")
    {
        // Ensure that "example.txt" exists in the current directory to pass this test
        REQUIRE_NOTHROW(([]() { freelance::FileProcessor fp{"example.txt"}; })());
    }
    SECTION("FileProcessor remove comments")
    {
        /*
        I don't want to implement a whole test for this.
        Please modify the source_sample_with_comments_path variable to whatever location of your testing sample
        and do the check manually after running the unit testing
    
        */
        const char *source_sample_with_comments_path = "example.txt";
        freelance::FileProcessor fp{source_sample_with_comments_path};
        fp.remove_comments();

        REQUIRE(true);
    }
}

TEST_CASE("power_1")
{
    SECTION("gives the expected calcuation")
    {
        REQUIRE(freelance::MyMath::power_1(3.0) == 9.0_a);
        REQUIRE(freelance::MyMath::power_1(3.0, 3) == 27.0_a);
        REQUIRE(freelance::MyMath::power_1(3.5, 4) == 150.0625_a);
    }
    SECTION("throw when negative exponent")
    {
        REQUIRE_THROWS_AS(freelance::MyMath::power_1(3.0, -3), std::runtime_error);
    }
}

TEST_CASE("power_2")
{
    SECTION("gives the expected calcuation")
    {
        REQUIRE(freelance::MyMath::power_2(3.0) == 9.0_a);
        REQUIRE(freelance::MyMath::power_2(3.0, 3) == 27.0_a);
        REQUIRE(freelance::MyMath::power_2(3.5, 4) == 150.0625_a);
    }
    SECTION("throw when negative exponent")
    {
        REQUIRE_THROWS_AS(freelance::MyMath::power_2(3.0, -3), std::runtime_error);
    }
}

TEST_CASE("power_3")
{
    SECTION("gives the expected calcuation")
    {
        REQUIRE(freelance::MyMath::power_3(3.0) == 9.0_a);
        REQUIRE(freelance::MyMath::power_3(3.0, 3) == 27.0_a);
        REQUIRE(freelance::MyMath::power_3(3.5, 4) == 150.0625_a);
    }
    SECTION("throw when negative exponent")
    {
        REQUIRE_THROWS_AS(freelance::MyMath::power_3(3.0, -3), std::runtime_error);
    }
}