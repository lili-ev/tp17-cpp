
#include "Point3D.h"

// Constructeur par defaut
Point3D::Point3D() {
    x = 0;
    y = 0;
    z = 0;
}

// Constructeur avec parametres
Point3D::Point3D(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Accesseurs
double Point3D::getX() const {
    return x;
}

double Point3D::getY() const {
    return y;
}

double Point3D::getZ() const {
    return z;
}
