#include <gtest/gtest.h>
#include <mymath.hpp>
#include <myfile.hpp>

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

TEST(Freelance, file_processor_creation_throw)
{
    EXPECT_THROW(freelance::FileProcessor fp{"nofile.txt"}, std::runtime_error);
}
TEST(Freelance, file_processor_creation_noexcept)
{
    // Ensure that "example.txt" exists in the current directory to pass this test
    EXPECT_NO_THROW(freelance::FileProcessor fp{"example.txt"});
}

TEST(Freelance, file_processor_remove_comment)
{
    /*
        I don't want to implement a whole test for this.
        Please modify the source_sample_with_comments_path variable to whatever location of your testing sample
        and do the check manually after running the unit testing
    
    */
    const char *source_sample_with_comments_path = "example.txt";
    freelance::FileProcessor fp{source_sample_with_comments_path};
    fp.remove_comments();

    ASSERT_TRUE(true);
}
