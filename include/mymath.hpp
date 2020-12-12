
#ifndef MYMATH
#define MYMATH

namespace freelance
{

    struct MyMath
    {
        // although passing an int or any number by refrence is not a big deal (no gain in performance)
        // the only benifit is that this function doesn't accept rvalues
        static int square_by_refrence(int &);

        //no gain in performance neither
        static void in_place_square(int &);
    };

} // namespace freelance
#endif