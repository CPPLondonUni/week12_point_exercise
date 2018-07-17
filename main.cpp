
#include "point.hpp"

#include <cassert>

int main()
{
    // Test operator==
    {
        const point p1{1, 2};
        const point p2 = p1;
        const point p3{3, 4};

        assert(p1 == p2);
        assert(!(p1 == p3));
    }

    // Test operator!=
    {
        const point p1{1, 2};
        const point p2 = {3, 4};
        const point p3 = p1;

        assert(p1 != p2);
        assert(!(p1 != p3));
    }

    // Test operator+
    {
        const point p1{1, 2};
        const point p2{3, 4};
        const point p3{4, 6};

        assert(p1 + p2 == p3);
    }

    // Test operator-
    {
        const point p1{3, 4};
        const point p2{1, 2};
        const point p3{2, 2};

        assert(p1 - p2 == p3);
    }

    // Test operator+=
    {
        point p1{1, 2};
        const point p2{3, 4};
        const point result{4, 6};

        p1 += p2;

        assert(p1 == result);
    }

    // Test operator-=
    {
        point p1{3, 4};
        const point p2{1, 2};
        const point result{2, 2};

        p1 -= p2;
        
        assert(p1 == result);
    }

    // Test output streaming
    std::cout << point{3, 4} << '\n';
}