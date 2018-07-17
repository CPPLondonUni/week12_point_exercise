//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}
