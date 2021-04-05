#include "Money.h"
#include <Windows.h>

Money makeMoney(unsigned int nominal, unsigned int number)
{
	Money bb;
	if (!bb.Init(nominal, number))
	{
		cout << "Помилка введення даних" << endl;
		cout << "________________________________________" << endl;
	}
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	Money b;
	b.Init(5, 3);
	b.Display();
	cout << "Сума: " << b.summa() << endl;
	cout << "________________________________________" << endl;
	Money b2;
	b2.Read();
	b2.Display();
	cout << "Сума: " << b2.summa() << endl;
	cout << "________________________________________" << endl;
	Money b3;
	cout << "Введіть номінал купюри: "; cin >> x;
	cout << "Введіть кількість купюр: "; cin >> y;
	b3 = makeMoney(x, y);
	b3.Display();
	b3.SetFirst(2);
	b3.SetSecond(3);
	cout << "Введіть номінал купюри: " << b3.GetFirst() << endl;
	cout << "Введіть кількість купюр: " << b3.GetSecond() << endl;
	b3.Display();
	cout << "Введіть кількість купюр: " << b3.summa() << endl;
}
