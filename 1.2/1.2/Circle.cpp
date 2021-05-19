#include <iostream>
#include <Windows.h>
#include <math.h>
#include "Circle.h"

using namespace std;
Circle::Circle(double X, double Y, double R)
{
    x = X; y = Y; r = R;
    cout << "Координати центру : "
        << "(" << x << "," << y << ")" << endl << endl;
    cout << "Радіус : " << r << endl << endl;
}

bool Circle::Init(double X, double Y, double R)
{
    if (r >= 0)
    {
        x = X; y = Y; r = R;
        cout << "Координати центру : "
            << "(" << x << "," << y << ")" << endl << endl;
        cout << "Радіус : " << r << endl << endl;
        return true;
    }
    else
    {
        return false;
    }
}

double Circle::fooP()
{
    length = 2 * 3.14 * r;
    return length;
}
double Circle::fooS()
{
    square = 3.14 * r * r;
    return square;
}
