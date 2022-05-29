#include <iostream>
#include <string>
using namespace std;

class shape {
public:
    string color;
    double getArea(double height, double width) {
        return height * width;
    }
    double getArea(double height, double base) {
        return height * base;
    }
    double getArea(double radius) {
        return radius * 3.14;
    }
};

class Rectangle : public shape {
public: 
   double height;
   double width;
};

class Triangle : public shape {
public:
    double height;
    double base;
};

class Circle : public shape {
    double radius;
};

int main()
{
    //here some code would go that could call any of the classes/subclasses
};

