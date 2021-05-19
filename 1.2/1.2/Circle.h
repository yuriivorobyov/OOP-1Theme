#pragma once

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Circle
{
public:
    Circle(double, double, double);
    bool Init(double x, double y, double r);
    double fooP();
    double fooS();
private:
    double x, y, r;
    double length;
    double square;
};
