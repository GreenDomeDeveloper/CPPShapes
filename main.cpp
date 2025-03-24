#include "shape.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<Shape*> myshapes;

    //myshapes.push_back(new Shape());
    myshapes.push_back(new Circle());
    myshapes.push_back(new Circle(5.0));
    myshapes.push_back(new Rectangle());
    myshapes.push_back(new Rectangle(4.0,6.0));

    for (int i=0; i< myshapes.size(); i++){
        myshapes.at(i)->printInfo();
    }

    return 0;
}