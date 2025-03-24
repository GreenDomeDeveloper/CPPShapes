#include "rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    length = width = 2.0;
}

Rectangle::Rectangle(double length, double width){
    this->length = length;
    this -> width = width;
}

double Rectangle::getArea(){
    return length * width;
}

void Rectangle::printInfo(){
    cout<<"I am a rectangle and my area is: "<<getArea()<<endl;
}