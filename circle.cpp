#include "circle.hpp"
#include <iostream>
using namespace std;

Circle::Circle(){
    radius = 3.0;
}

Circle::Circle(double radius){
    this->radius = radius;
}

double Circle::getArea(){
    return 2*3.14156*radius;
}

void Circle::printInfo(){
    cout<<"I am a circle and my area is: "<<getArea()<<endl;
}