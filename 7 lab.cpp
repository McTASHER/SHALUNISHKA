#include <iostream>
#include <stdbool.h>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	float a, b, v1, v2, s, t, c;
	long int min, max, nok, maxchislo = 0; long int  a1, a2, b1, b2, AA2, c1, c2, B2, C2, A2, aa11, aa22;
	double y, x;
	const float pi = 3.14;
	cout << "Введите количество градусов" << endl;
	cout << "X = "; cin >> x;
	cout << "Количество радиан: " << x << "* 3.14 / 180 = " << x * pi / 180 << endl;
	cout << "_____________________________________________________________________________" << endl;

	cout << "Введите количество радиан" << endl;
	cout << "X = "; cin >> x;
	cout << "Количество градусов: " << x << "* 180 / 3.14 = " << x / pi * 180 << endl;
	cout << "_____________________________________________________________________________" << endl;

	cout << "КГ конфет стоит  "; cin >> a;
	cout << "Введите количество Кг" << endl;
	cout << "X = "; cin >> x;
	cout << x << " Кг конфет стоит: " << x * a << endl;
	cout << "_____________________________________________________________________________" << endl;

	cout << "скорость первого автомобиля = "; cin >> v1;
	cout << "скорость второго автомобиля = "; cin >> v2;
	cout << "скорость отдаления: v1 + v2 = " << v1 + v2 << endl;
	cout << "Расстояние между машинами(км) = "; cin >> s;
	cout << "количество часов: "; cin >> t;
	cout << "расстояние между ними через " << t << " часов = " << s + t * (v1 + v2) << " км" << endl;
	cout << "_____________________________________________________________________________" << endl;

	cout << "введите коэфф. A и B" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << a << "X + " << b << " = " << -(b / a) << endl;
	cout << "_____________________________________________________________________________" << endl;

	cout << "A1 = "; cin >> a1; aa11 = a1;
	cout << "A2 = "; cin >> a2; aa22 = a2; A2 = a2; AA2 = a2;
	cout << "B1 = "; cin >> b1;
	cout << "B2 = "; cin >> b2; B2 = b2;
	cout << "C1 = "; cin >> c1;
	cout << "C2 = "; cin >> c2; C2 = c2;

	cout << a1 << "x + " << b1 << "y = " << c1 << "\n";
	cout << a2 << "x + " << b2 << "y = " << c2 <<"\n" << endl;
	
	double opr, opr1, opr2;

	opr = a1 * b2 - a2 * b1;
	opr1 = c1 * b2 - c2 * b1;
	opr2 = a1 * c2 - c1 * a2;
	cout << "\n";
	cout << "X = " << opr1 / opr << "    Y = " << opr2 / opr << endl;

	return 0;
}
