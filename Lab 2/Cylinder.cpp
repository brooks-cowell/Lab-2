#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder()
{
    radius = 5.0;
    height = 5.0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(double r)
{
    radius = r;
}

void Cylinder::setHeight(double h)
{
    height = h;
}

double Cylinder::getRadius() const
{
    return radius;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::calculateV() const
{
    return pi * height * pow(radius, 2);
}

double Cylinder::calculateSA() const
{
    return (2 * pi * radius * height) + (2 * pi * pow(radius, 2));
}



