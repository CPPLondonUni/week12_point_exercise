

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

#include <iostream>

struct point {
    int x = 0;
    int y = 0;

    point& operator+=(const point& other);

    point& operator-=(const point& other);
};

bool operator==(const point& lhs, const point& rhs);

bool operator!=(const point& lhs, const point& rhs);

point operator+(const point& lhs, const point& rhs);

point operator-(const point& lhs, const point& rhs);

std::ostream& operator<<(std::ostream& os, const point& pt);

#endif //WEEK11_POINT_EXERCISE_POINT_HPP
