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
	cout << "������ x: " << endl;
	cin >> x;
	cout << "������ y: " << endl;
	cin >> y;
	cout << "������ r: " << endl;
	cin >> r;

	Circle w = Circle(x, y, r);
	w.Init(x, y, r);
	cout << "������� ����: " << w.fooP();
	cout << endl;
	cout << "����� ����: " << w.fooS();
	return 0;
}
