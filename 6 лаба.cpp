#include <iostream>
#include <ctime>
int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;
	long double a, b, x, y, c;
	float zamenaB, zamena = 0;
	cout << "¬ведите 2 числа " << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "\n";
	zamena = a;
	a = b;
	b = zamena;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "__________________________________________________________" << endl;

	cout << "¬ведите 3 числа " << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;
	cout << "\n";
	zamena = a; zamenaB = b;
	a = c; b = zamena; c = zamenaB;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
	cout << "__________________________________________________________" << endl;
	cout << "¬ведите 3 числа " << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;
	cout << "\n";
	zamena = a; zamenaB = b;
	a = c; b = zamena; c = zamenaB;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
	cout << "__________________________________________________________" << endl;
	cout << "Print x" << endl;
	cout << "X = "; cin >> x;
	cout << "\n";
	y = 3 * pow(x, 6) - 6 * x * x - 7;
	cout << "Y = " << y << endl;
	cout << "__________________________________________________________" << endl;

	cout << "Print x" << endl;
	cout << "X = "; cin >> x;
	cout << "\n";
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "Y = " << y << endl;
	cout << "__________________________________________________________" << endl;

	cout << "print A" << endl;
	cout << "A = "; cin >> a;
	x = a * a;   // A^2
	x = x * x;    //A^4
	x = x * x;    // A^8
	cout << "A^8 = " << x << endl;
	cout << "__________________________________________________________" << endl;

	cout << "print A" << endl;
	cout << "A = "; cin >> a;
	x = a * a; // A^2
	y = x * a; // A^2
	x = x * y; // A^5
	y = x; // A^5
	x = y * y; //A^10
	x = x * y; //A^15
	cout << "A^15 = " << x << endl;
	cout << "__________________________________________________________" << endl;

	return 0;
}