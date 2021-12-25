#include <iostream>
#include <stdbool.h>
#include <ctime>
#include <string>

using namespace std;

double powerA3(double a, double b)
{
	b = pow(a, 3);
	return b;
}

int Sign(int x)
{
	if (x < 0)
	{
		return -1;
	}
	else if (x == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

double rings(double r1,double r2)
{
	const double pi = 3.14;
	cout << "Площадь внутреннего кольца = ";
	return (pi * pow(r2, 2)) - (pi * pow(r1, 2));
}

int Quarter(int x, int y)
{
	int result;
	if (x > 0)
	{
		if (y > 0)
		{
			result = 1;
		}
		else
		{
			result = 4;
		}
	}
	else
	{
		if (y > 0)
		{
			result = 2;
		}
		else
		{
			result = 3;
		}
	}
	return result;
}

double fact2(int n)
{
	int summ = 1;
	int gg;
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2)
		{
			cout << i;
			if (i != n)
			{
				cout << " * ";
			}
			summ *= i;
			if (i == n)
			{
				cout << " = ";
			}
		}
		return summ;
	}
	else
	{
		for (int i = 1; i <= n; i += 2)
		{
			cout << i;
			if (i != n)
			{
				cout << " * ";
			}
			summ *= i;
			if (i == n)
			{
				cout << " = ";
			}
		}
		return summ;
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int x,y;
	double a,b = 0;
	int r1, r2;
	const double pi = 3.14;

	
	cout << "Введите 5 чисел для нахождения их 3 степени" << endl;
	cout << "A = ";cin >> a; powerA3(a, b);cout << a << "^3 = " << powerA3(a, b) <<"\n"<< endl;
	cout << "A = ";cin >> a;powerA3(a, b);cout << a << "^3 = " << powerA3(a, b) << "\n" << endl;
	cout << "A = ";cin >> a;powerA3(a, b);cout << a << "^3 = " << powerA3(a, b) << "\n" << endl;
	cout << "A = ";cin >> a;powerA3(a, b);cout << a << "^3 = " << powerA3(a, b) << "\n" << endl;
	cout << "A = ";cin >> a;powerA3(a, b);cout << a << "^3 = " << powerA3(a, b) << "\n" << endl;
	
	cout << "\n\n_______________________________________________________\n\n";
	cout << "Введите 2 числa" << endl;
	cout << "Х = ";cin >> x;
	cout << "Y = ";cin >> y;
	cout << "\n";
	cout << Sign(x) + Sign(y);
	cout << "\n\n_______________________________________________________\n\n";
	
	
	cout << "Введите радиус большого кольца и малого" << endl;
	cout << "R внут = ";cin >> r1;
	cout << "R внеш = ";cin >> r2;
	cout << rings(r1, r2) << endl;
	cout << "\n";
	cout << "Введите радиус большого кольца и малого" << endl;
	cout << "R внут = ";cin >> r1;
	cout << "R внеш = ";cin >> r2;
	cout << rings(r1, r2) << endl;
	cout << "\n";
	cout << "Введите радиус большого кольца и малого" << endl;
	cout << "R внут = ";cin >> r1;
	cout << "R внеш = ";cin >> r2;
	cout << rings(r1, r2) << endl;
	cout << "\n\n_______________________________________________________\n\n";
	

	cout << "Введите координаты точки" << endl;
	cout << "X = ";cin >> x;
	cout << "Y = ";cin >> y;
	cout <<"точка находится в "<< Quarter(x,y) << " четверти" << endl;cout << "\n";
	cout << "Введите координаты точки" << endl;
	cout << "X = ";cin >> x;
	cout << "Y = ";cin >> y;
	cout << "точка находится в " << Quarter(x, y) << " четверти" << endl;cout << "\n";
	cout << "Введите координаты точки"<< endl;
	cout << "X = ";cin >> x;
	cout << "Y = ";cin >> y;
	cout << "точка находится в " << Quarter(x, y) << " четверти" << endl;cout << "\n";
	cout << "\n\n_______________________________________________________\n\n";
	
	
	cout << "введите 2 числа: четно и нечётное" << endl;
	cout << "Чётное - ";cin >> x;
	cout << fact2(x);
	cout << "\n\n";
	cout << "Нечётное - ";cin >> x;
	cout << fact2(x);
	
	return 0;
}
