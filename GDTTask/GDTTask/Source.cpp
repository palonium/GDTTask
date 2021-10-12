#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");

	srand(time(NULL));
	int  a, b, x, y, z, attempt = 0, cache1 = 1, cache2 = 2, cache3;

	a = 1;
	b = 99;
	x = a + rand() % (b - a + 1);

	if (x % 2 == 0)
	{
		cout << "Загаданное число чётное" << endl;
	}
	else
	{
		cout << "Загаданное число нечётное" << endl;
	}

	if (x < 10)
	{
		cout << "Загаданное число однозначное" << endl;
	}

	else
	{
		cout << "Загаданное число двузначное" << endl;
	}

	do
	{
		cout << "Введите число" << endl;
		cin >> y;
		attempt += 1;

		if (x < y)
		{
			cout << "Загаданное число меньше введённого" << endl;
		}
		else
		{
			cout << "Загаданное число больше введённого" << endl;
		}
	} while (y != x);
	cout << "Количетво попыток: " << attempt << endl;
	z = x;

	if (z >= 10 && z <= 20)
	{
		cout << "Возраст" << x << "лет";
	}
	else
	{
		y = z % 10;
		switch (y)
		{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "Возраст " << z << " лет" << endl;
			break;
		case 1:
			cout << "Возраст " << z << " год" << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << "Возраст " << z << " годa" << endl;
		}
	}
	int fib1 = 0, fib2 = 1, n;
	cout << endl;
	cout << "Числа Фибоначчи: ";
	while (fib2 <= x)
	{

		cout << fib2 << " ";
		n = fib1;;
		fib1 = fib2;
		fib2 = n + fib1;
	}
	return 0;
}