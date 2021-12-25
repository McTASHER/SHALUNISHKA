#include <iostream>
#include <stdbool.h>
#include <ctime>
#include <string>

using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int x, N, x1;
	double a, b, c;
	
	cout << "Введите 2 числа A и B" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;

	if (a > 2) {
		cout << "Неравенство A > 2 справедливо" << endl;
	}
	else
	{
		cout << "Неравенство A > 2 несправедливо A < 2" << endl;
	}
	if (b <= 3)
	{
		cout << "Неравенство B <= 3 справедливо" << endl;
	}
	else
	{
		cout << "Неравенство B <= 3 несправедливо B > 3" << endl;
	}
	cout << "_______________________________________________________\n";

	cout << "Введите 3 числа A, B, C" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;

	if ((b > a) && (b < c))
	{
		cout << "двойное неравенство A<B<C верно\n";
	}
	else
	{
		cout << "двойное неравенство A<B<C неверно\n";
	}
	cout << "_______________________________________________________\n";


	cout << "введите число" << endl;
	cout << "X = "; cin >> x;
	
	if ((x > 9) && (x < 100) && (x % 2 == 0))
	{
		cout << "Данное число является четным двузначным\n";
	}
	else
	{
		cout << "Данное число не является четным двузначным\n";
	}
	cout << "_______________________________________________________\n";
	cout << "введите число" << endl;
	cout << "N = "; cin >> N; x1 = N;

	int count = 1;
	while (N /= 10)   //kolvo cifr
		count++;
	int* p;
	p = new int[count];

	for (int i = 0; i < count; i++)
	{
		p[i] = x1 % 10;       //zapolnenie massiva
		x1 = x1 / 10;
	}
	/*for (int i = 0; i < count; i++)
		cout << p[i] << ' ';          //вывод массива
	*/
	int kolvo = 0;
	for (int l = 0; l < count - 1; l++)
	{
		if (p[l] > p[l + 1])
		{
			kolvo++;
		}
		else
		{
			kolvo-= 10000;
		}

	}
	cout << "\n";
	if (kolvo == count - 1)
	{
		cout << "порядок чисел возрастающий" << endl;
	}
	else
	{
		kolvo = 0;
		for (int l = 0; l < count - 1; l++)
		{
			if (p[l + 1] > p[l])
			{
				kolvo++;
			}
			else
			{
				kolvo -= 10000;
			}

		}
		cout << "\n";
		if (kolvo == count - 1)
		{
			cout << "порядок чисел убывающий" << endl;
		}
		else
		{
			cout << "последовательности нет\n";
		}
	}
	cout << "_______________________________________________________\n";


	cout << "введие число состоящее из 4 цифр " << endl;
	cout << "X = "; cin >> x;

	if ((x / 1000 == x % 10) && ((x/10) % 10) == (x / 100) % 10)
	{
		cout << "Данное число зеркальное  \n";
	}
	else
	{
		cout << "Данное число не зеркальное\n";
	}
	cout << "_______________________________________________________\n";

	
	int a1, b1, c1;
	
	cout << "Введите 3 числа A, B, C" << endl;
	cout << "A = "; cin >> a1;
	cout << "B = "; cin >> b1;
	cout << "C = "; cin >> c1;
	a1 = a1 * a1;
	b1 = b1 * b1;
	c1 = c1 * c1;
	cout << "A^2 = " << a1 << "\t" << "B^2 = " << b1 << "\t" << "C^2 = " << c1 << endl;
	if ((b1  ==  a1 +  c1) || ( a1 ==  c1 +  b1) || ( c1 ==  a1 +  b1))
	{
		cout << "Треугольник прямоугольный\n";
	}
	else
	{
		cout << "Треугольник не прямоугольный\n";
	}
	cout << "_______________________________________________________\n";
	
	cout << "Введите 3 числа A, B, C" << endl;
	cout << "A = "; cin >> a1;
	cout << "B = "; cin >> b1;
	cout << "C = "; cin >> c1;

	if ((a1 + c1 > b1) || (c1 + b1 > a1) || (a1 + b1 > c))
	{
		cout << "треугольник существует\n";
	}
	else
	{
		cout << "треугольник не существует\n";
	}
	cout << "_______________________________________________________\n";
	return 0;
}
