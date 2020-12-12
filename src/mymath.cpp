
#include <mymath.hpp>

namespace freelance
{
    int MyMath::square_by_refrence(int &x)
    {
        return x * x;
    };
    void MyMath::in_place_square(int &x)
    {
        x *= x;
    }

} // namespace freelance