#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "shape.hpp"

class Rectangle: public Shape {
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double length, double width);
    double getArea() override;
    void printInfo() override;
};



#endif