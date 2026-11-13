
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Segment.h"

class Triangle {
private:
    Point a, b, c;

public:
    Triangle();
    Triangle(Point p1, Point p2, Point p3);

    double perimetre() const;
};

#endif
