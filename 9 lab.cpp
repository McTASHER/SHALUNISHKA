#include <iostream>
#include <stdbool.h>
#include <ctime>
#include <string>

using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	long int sek, No;
	long int a, a1, b, b1, c, h, x;
	long int dlin = 0, shir = 0, kolvo;

	cout << "введите  количество сеукнд прошедших с начала суток" << endl;
	cout << "sek = "; cin >> sek;
	cout << sek - (int(sek / 60) * 60) << " секунд прошло с начала последней минуты" << endl;
	cout << "______________________________________________________________________________________\n";
	string arr[390];
	arr[1] = "понедельник";
	arr[2] = "вторник";
	arr[3] = "среда";
	arr[4] = "четверг";
	arr[5] = "пятница";
	arr[6] = "суббота";
	arr[0] = "воскресенье";
	
	cout << "введите номер дня" << endl;
	cout << "No = "; cin >> No;
	cout << No << " день это " << arr[No % 7] << endl;
	cout << "____________________________________________________\n";
	
	int K = 0, n = 0;
	int number_day;
	cout << "Введите число K от 1 до 365:  " << endl;
	cout << "K = "; cin >> K;
	cout << "Введите число N от 1 до 7:  " << endl;
	cout << "N = "; cin >> n;
	cout << "Номер дня недели для К-го дня года = " << ((K + n - 2) % 7) + 1 << endl;
	cout << "____________________________________________________\n";

	cout << "введите A, B, C " << endl;
	cout << "A = "; cin >> a; a1 = a;
	cout << "B = "; cin >> b; b1 = b;
	cout << "C = "; cin >> c;
	while (b >= c)      // сколько раз влезет по длине
	{
		dlin++;
		b -= c;
	}
	while (a >= c)      //сколько раз влезет по ширине
	{
		shir++;
		a -= c;
	}

	cout << dlin << endl;
	cout << shir << endl;
	cout << "количество квадратов = " << shir * dlin << endl;
	cout << "Оставшееся пространство = " << a1 * b1 - shir * dlin * pow(c, 2) << endl;
	cout << "____________________________________________________\n";


	cout << "введите номер года" << endl;
	cout << "X = "; cin >> x;
	cout << "Номер столетия " << x << "года: " << int((x-1)/ 100) + 1 << endl;
	cout << "____________________________________________________\n";
	return 0;
}
