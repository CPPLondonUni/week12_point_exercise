//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!=(const point& lhs, const point& rhs)
{
    return !(lhs == rhs);
}

point operator+(const point& lhs, const point& rhs)
{
    return point{lhs.x + rhs.x, lhs.y + rhs.y};
}

point operator-(const point& lhs, const point& rhs)
{
    return point{lhs.x - rhs.x, lhs.y - rhs.y};
}

point& point::operator+=(const point& other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}

point& point::operator-=(const point& other)
{
    x -= other.x;
    y -= other.y;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const point& pt)
{
    os << '(' << pt.x << ", " << pt.y << ')';
    return os;
}
