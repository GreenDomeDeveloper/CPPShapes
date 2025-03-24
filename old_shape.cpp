#include "shape.hpp"
#include <iostream>
using namespace std;

double Shape::getArea(){

    return 0.0;
}

void Shape::printInfo(){
    cout<<"I am a shape and my area is: "<<getArea()<<endl;
}