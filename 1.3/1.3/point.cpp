#include "point.h"

bool Point::Init(float x, float y)
{
	SetX(x);
	SetY(y);
	return true;
}

void Point::Read()
{
	float X, Y;
	do
	{
		cout << "x = "; cin >> X;
		cout << "y = "; cin >> Y;

	} while (!Init(X, Y));
}


void Point::Display()
{
	cout << toString() << endl;
}

string Point::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}



void Point::moveX()
{
	float rx;
	cout << "����� �����, �� ��� ���������� ����� X: ";
	cin >> rx;
	x += rx;
	cout << "�������� ���� �����:  ";
	toString();

}

void Point::moveY()
{
	float ry;
	cout << "����� �����, �� ��� ���������� ����� Y: ";
	cin >> ry;
	y += ry;
	cout << "�������� ���� �����:  ";
	toString();
}
void Point::r1(Point p)
{
	float r;
	r = sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY()));
	cout << "³������ �� ������� = " << r << endl;
}
