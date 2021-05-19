#include <iostream>
#include <Windows.h>
#include "Circle.h"

using namespace std;

Circle q(double, double, double);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, r;
	cout << "¬вед≥ть x: " << endl;
	cin >> x;
	cout << "¬вед≥ть y: " << endl;
	cin >> y;
	cout << "¬вед≥ть r: " << endl;
	cin >> r;

	Circle w = Circle(x, y, r);
	w.Init(x, y, r);
	cout << "ƒовжина кола: " << w.fooP();
	cout << endl;
	cout << "ѕлоща кола: " << w.fooS();
	return 0;
}
