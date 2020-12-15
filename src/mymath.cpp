
#include <mymath.hpp>
#include <stdexcept>

namespace freelance
{
    int MyMath::square_by_refrence(int &x)
    {
        return x * x;
    };
    void MyMath::in_place_square(int &x)
    {
        x *= x;
    };

    //power(double,int): first implementation
    //readable but not efficient (unless the compiler do good job and optimize the recursive calls)
    // I could make it constexpr if we need this function at compile time
    // this implementation is naive and don't take into account possible overflows when n is too big
    double MyMath::power_1(double m, int n)
    {

        if (n < 0)
            throw std::runtime_error("Negetive powers not handeled in this implementation");
        else
            return (n == 0) ? 1.0 : m * power_1(m, n - 1);
    }

    /* power(double,int): second implementation
       Prehaps the simplest implementation si as follows

        double MyMath::power_2(double m, int n)
        {
            double result = 1 ;
            if (n < 0)
                throw std::runtime_error("Negetive powers not handeled in this implementation");
            else
            {
                for (int i=1; i<=n;++i)
                    result *= m ;
            }
            return result
        }

        But in this implemenation I'll take advantage of boost ranges
    */
    double MyMath::power_2(double m, int n)
    {
        double result = 1.0;
        if (n < 0)
            throw std::runtime_error("Negetive powers not handeled in this implementation");
        else
            for (auto i : boost::irange(1, n + 1))
                result *= m;
        return result;
    };

} // namespace freelance