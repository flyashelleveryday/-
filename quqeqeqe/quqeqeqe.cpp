#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	//Задание 1
	cout << "Задание 1" << endl;
	cout << "Размер типа int: " << sizeof(int) << " байт" << "\n";
	cout << "Размер типа short int: " << sizeof(short int) << " байт" << "\n";
	cout << "Размер типа long int: " << sizeof(long int) << " байт" << "\n";
	cout << "Размер типа float: " << sizeof(float) << " байт" << "\n";
	cout << "Размер типа double: " << sizeof(double) << " байт" << "\n";
	cout << "Размер типа long double: " << sizeof(long double) << " байт" << "\n";
	cout << "Размер типа char: " << sizeof(char) << " байт" << "\n";
	cout << "Размер типа bool: " << sizeof(bool) << " байт" << "\n" << "\n";

	system("pause");

	//Задание 2
	bool a = 1;
	int n = 0;
	int numberInt;
	unsigned int mask = 1;
	mask <<= 31;

	cout << "Задание 2" << endl;
	cout << "Введите целое число: ";
	cin >> numberInt;

	cout << endl << "Двоичное представление в памяти целого числа: " << endl;
	for (int i = 0; i < 32; i++)
	{
		putchar((mask & numberInt) ? '1' : '0');
		mask >>= 1;

		if (i % 8 == 0)
			putchar(' ');

	}

	mask = 1;
	mask <<= 31;

	cout << endl;

	//Задание 3
	a = 1;
	n = 0;
	cout << "Задание 3" << endl;
	mask = 1;
	mask <<= 31;

	union {
		int numFloatI;
		float numFloat;
	};

	cout << "Введите вещественное число: ";
	cin >> numFloat;

	cout << endl << "Двоичное представление в памяти числа типа float: " << endl;
	for (int i = 0; i < 32; i++)
	{
		putchar((mask & numFloatI) ? '1' : '0');
		mask >>= 1;

		if (i == 0 || i == 8)
			putchar(' ');

	}
	cout << endl;
	mask = 1;
	mask <<= 31;

	//Задание 4
	a = 1;
	n = 0;
	cout << "Задание 4" << endl;
	mask = 1;
	mask <<= 31;

	union {
		int arrDouble[2];
		double numDouble;
	};

	cout << "Введите вещественное число с двойной точностью: ";
	cin >> numDouble;

	cout << endl << "Двоичное представление в памяти числа типа double: " << endl;
	for (int i = 1; i >= 0; i--)
	{
		for (int j = 0; j < 32; j++)
		{
			putchar((mask & arrDouble[i]) ? '1' : '0');
			mask >>= 1;

			if (j == 0 && i == 1 || j == 11 && i == 1)
				putchar(' ');

		}
		mask = 1;
		mask <<= 31;

	}
	cout << endl;
}

