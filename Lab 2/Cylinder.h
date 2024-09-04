#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
    // Constructor and Destructor
    Cylinder();
    ~Cylinder();

    // Setters
    void setRadius(double r);
    void setHeight(double h);

    // Getters
    double getRadius() const;
    double getHeight() const;

    // Calculations
    double calculateV() const;  // Calculate Volume
    double calculateSA() const; // Calculate Surface Area
    

private:
    double radius;
    double height;
    static constexpr double pi = 3.14159;
};

#endif // CYLINDER_H
