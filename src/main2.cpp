
#include <iostream>
#include "../include/Triangle.h"
using namespace std;

int main() {
    Point A(0, 0);
    Point B(3, 0);
    Point C(0, 4);

    Triangle t(A, B, C);

    cout << "Perimetre du triangle : "
         << t.perimetre() << endl;

    return 0;
}
