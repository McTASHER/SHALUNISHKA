#include <iostream>
#include <stdbool.h>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	
	int chislo;
	double x,b,a;
	
	cout << "введите  количество байт" << endl;
	cout << "X = "; cin >> x;
	a = x / 1024;
	cout << "Количество полных килобайтов = " <<int (a) << endl;
	
	cout << "____________________________________________________________" << endl;
	cout << "введите длину отрезка А и Б, А > Б!!" << endl;
	cout << "A = "; cin >>a;
	cout << "B = "; cin >>b;
	cout << "ОТрезок А вмещает в себя " << int(a / b) << " отрезков B" << endl;
	cout << "____________________________________________________________" << endl;
	
	cout << "введите длину отрезка А и Б, А > Б!!" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "ОТрезок А вмещает в себя " << int(a / b) << " отрезков B" << endl;
	cout << "незанятая часть отрезка А = " << a - int(a / b) * b << endl;
	cout << "____________________________________________________________" << endl;
	
	
	cout << "напишите двузначное число" << endl;
	cout << "X = "; cin >> chislo;
	cout << "Число наоборот: " << chislo % 10 * 10 + int(chislo / 10) << endl;
	cout << "____________________________________________________________" << endl;
	
	cout << "напишите трехзначное число" << endl;
	cout << "X = "; cin >> chislo;
	cout << "Новое число:" << chislo % 100 * 10 + int(chislo / 100) << endl;
	cout << "____________________________________________________________" << endl;
	

	return 0;
}
