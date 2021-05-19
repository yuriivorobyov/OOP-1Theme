#include <iostream>
#include <Windows.h>
#include "point.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i, n, s;
    float x, y;
    const int con = 5;
    Point p[con];
    do
    {
        cout << "\t ������� ��������:" << endl;
        cout << "1: ������ �����" << endl;
        cout << "2: ������� ����� � �������" << endl;
        cout << "3: ������� �� �����" << endl;
        cout << "4: ���������� ����� �� �� X" << endl;
        cout << "5: ���������� ����� �� �� Y" << endl;
        cout << "6: ³������ �� ����� �������" << endl;
        cout << "0: ����� � ��������" << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            cout << "������ ����� �����:";
            cin >> i;
            cout << "������� ���������� ����� x y:";
            cin >> x;
            cin >> y;
            p[i].Init(x, y);
            break;
        case 2:
            cout << "������ ����� �����:";
            cin >> i;
            p[i].toString();
            break;
        case 3:
            for (i = 0; i < con; i++)
                p[i].toString();
            break;
        case 4:
            cout << "������ ����� �����:";
            cin >> i;
            p[i].moveX();
            break;
        case 5:
            cout << "������ ����� �����:";
            cin >> i;
            p[i].moveY();
            break;
        case 6:
            cout << "������ ����� ����� �����:";
            cin >> i;
            cout << "������ ����� ����� �����:";
            cin >> n;
            p[i].r1(p[n]);
            break;

        default:
            cout << "�� ����� ������� ����� ��������" << endl;
        }
    } while (s != 0);
}
