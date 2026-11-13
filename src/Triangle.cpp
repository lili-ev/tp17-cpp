
#include "../include/Triangle.h"

Triangle::Triangle() {
}

Triangle::Triangle(Point p1, Point p2, Point p3) {
    a = p1;
    b = p2;
    c = p3;
}

double Triangle::perimetre() const {
    Segment ab(a, b);
    Segment bc(b, c);
    Segment ca(c, a);

    return ab.longueur() + bc.longueur() + ca.longueur();
}
