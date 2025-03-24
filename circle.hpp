#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "shape.hpp"

class Circle: public Shape{
private:
    double radius;
public:
    Circle();
    Circle(double radius);
    double getArea() override;
    void printInfo() override;
};





#endif