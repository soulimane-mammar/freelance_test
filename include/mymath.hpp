
#ifndef MYMATH
#define MYMATH

#include <boost/range/irange.hpp>
namespace freelance
{

    struct MyMath
    {
        // although passing an int or any number by refrence is not a big deal (no gain in performance)
        // the only benefit is that this function doesn't accept rvalues
        static int square_by_refrence(int &);

        //no gain in performance neither
        static void in_place_square(int &);

        // power: first approch
        static double power_1(double, int = 2);

        //power: second approch
        static double power_2(double, int = 2);

        //overloading power using templates
        template <typename T>
        static T power_3(T m, int n = 2)
        {
            static_assert(std::is_arithmetic_v<T>, "Arithmetic required");
            T result = T(1);
            if (n < 0)
                throw std::runtime_error("Negetive powers not handeled in this implementation");
            else
                for (auto i : boost::irange(1, n + 1))
                    result *= m;
            return result;
        }
    };

} // namespace freelance
#endif