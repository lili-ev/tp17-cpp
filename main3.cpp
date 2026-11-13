
#include <iostream>
#include "include/Matrix.h"
using namespace std;

int main() {

    // Matrices 2x2 d'entiers
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "===== MATRICE A =====" << endl;
    cout << A;

    cout << "===== ADDITION A + B =====" << endl;
    cout << A + B;

    cout << "===== MULTIPLICATION A * B =====" << endl;
    cout << A * B;

    // Matrice 3x3 de reels
    Matrix<double, 3, 3> C;

    C.at(0, 0) = 1.5;
    C.at(0, 1) = 2.5;
    C.at(0, 2) = 3.5;

    C.at(1, 0) = 4.5;
    C.at(1, 1) = 5.5;
    C.at(1, 2) = 6.5;

    C.at(2, 0) = 7.5;
    C.at(2, 1) = 8.5;
    C.at(2, 2) = 9.5;

    cout << "===== MATRICE C (3x3) =====" << endl;
    cout << C;

    return 0;
}
