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
		cout << "���������� ����� ������" << endl;
	}
	else
	{
		cout << "���������� ����� ��������" << endl;
	}

	if (x < 10)
	{
		cout << "���������� ����� �����������" << endl;
	}

	else
	{
		cout << "���������� ����� ����������" << endl;
	}

	do
	{
		cout << "������� �����" << endl;
		cin >> y;
		attempt += 1;

		if (x < y)
		{
			cout << "���������� ����� ������ ���������" << endl;
		}
		else
		{
			cout << "���������� ����� ������ ���������" << endl;
		}
	} while (y != x);
	cout << "��������� �������: " << attempt << endl;
	z = x;

	if (z >= 10 && z <= 20)
	{
		cout << "�������" << x << "���";
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
			cout << "������� " << z << " ���" << endl;
			break;
		case 1:
			cout << "������� " << z << " ���" << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << "������� " << z << " ���a" << endl;
		}
	}
	int fib1 = 0, fib2 = 1, n;
	cout << endl;
	cout << "����� ���������: ";
	while (fib2 <= x)
	{

		cout << fib2 << " ";
		n = fib1;;
		fib1 = fib2;
		fib2 = n + fib1;
	}
	return 0;
}