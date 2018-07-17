
#include "point.hpp"

#include <cassert>

int main()
{
    const point p1{1, 2};
    const point p2 = p1;
    const point p3{3, 4};

    assert(p1 == p2);
    assert(!(p1 == p3));
}