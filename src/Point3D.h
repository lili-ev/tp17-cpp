
#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;

public:
    // Constructeurs
    Point3D();
    Point3D(double x, double y, double z);

    // Accesseurs
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
