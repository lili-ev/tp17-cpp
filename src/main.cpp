
#include <iostream>
#include "Point3D.h"
using namespace std;

int main() {
    Point3D p1(2, 3, 4);
    Point3D p2(5, 6, 7);

    cout << "Point 1 : ("
         << p1.getX() << ", "
         << p1.getY() << ", "
         << p1.getZ() << ")" << endl;

    cout << "Point 2 : ("
         << p2.getX() << ", "
         << p2.getY() << ", "
         << p2.getZ() << ")" << endl;

    return 0;
}
