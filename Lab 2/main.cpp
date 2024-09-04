#include <iostream>
#include "Cylinder.h"

int main()
{
    Cylinder c;
    c.setRadius(5);
    c.setHeight(5);

    std::cout << "The radius of the cylinder is: " << c.getRadius() << std::endl;
    std::cout << "The height of the cylinder is: " << c.getHeight() << std::endl;
    std::cout << "The volume of the cylinder is: " << c.calculateV() << std::endl;
    std::cout << "The surface area of the cylinder is: " << c.calculateSA() << std::endl;

    return 0;
}