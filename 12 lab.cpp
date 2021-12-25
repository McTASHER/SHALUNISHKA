#include <iostream>#include <iostream>
#include <ctime>
#include <clocale>
#include <cstdlib>
#include <string>
#include <Windows.h>

int main()
{
	
	setlocale(LC_ALL, "ru");
	using namespace std;
	srand(time(NULL));
	int a, b, d;

	string c,buk = " ";

	cout << "Введите число  от 1 до 31" << endl;
	cin >> a;
	cout << "Введите число  от 1 до 12" << endl;
	cin >> b;
	switch (a)
	{
	case 1:
		c = "первое";
		break;
	case 2:
		c = "второе";
		break;
	case 3:
		c = "третье";
		break;
	case 4:
		c = "четвертое";
		break;
	case 5:
		c = "пятое";
		break;
	case 6:
		c = "шестое";
		break;
	case 7:
		c = "седьмое";
		break;
	case 8:
		c = "восьмое";
		break;
	case 9:
		c = "девятое";
		break;
	case 10:
		c = "десятое";
		break;
	case 11:
		c = "одиннадцатое";
		break;
	case 12:
		c = "двенадцатое";
		break;
	case 13:
		c = "тринадцатое";
		break;
	case 14:
		c = "четырнадцатое";
		break;
	case 15:
		c = "пятнадцатое";
		break;
	case 16:
		c = "шестнадцатое";
		break;
	case 17:
		c = "семнадцатое";
		break;
	case 18:
		c = "восемнадцатое";
		break;
	case 19:
		c = "девятнадцатое";
		break;
	case 20:
		c = "двадцатое";
		break;
	case 21:
		c = "двадцать первое";
		break;
	case 22:
		c = "двадцать второе";
		break;
	case 23:
		c = "двадцать третье";
		break;
	case 24:
		c = "двадцать четвертое";
		break;
	case 25:
		c = "двадцать пятое";
		break;
	case 26:
		c = "двадцать шестое";
		break;
	case 27:
		c = "двадцать седьмое";
		break;
	case 28:
		c = "двадцать восьмое";
		break;
	case 29:
		c = "двадцать девятое";
		break;
	case 30:
		c = "тридцатое";
		break;
	case 31:
		c = "дридцать первое";
		break;
	default:
		c = "выход за границы";
		break;
	}
	c += " ";
	switch (b)
	{
	case 1:
		c += "января";
		break;
	case 2:
		c += "февраля";
		break;
	case 3:
		c += "марта";
		break;
	case 4:
		c += "апреля";
		break;
	case 5:
		c += "мая";
		break;
	case 6:
		c += "июня";
		break;
	case 7:
		c += "июля";
		break;
	case 8:
		c += "августа";
		break;
	case 9:
		c += "сентября";
		break;
	case 10:
		c += "октября";
		break;
	case 11:
		c += "ноября";
		break;
	case 12:
		c += "декабря";
		break;
	}
	cout << c << endl;
	
	cout << "____________________________________________________________________" << endl;

	cout << "Введите  направление робота N - север, E - восток, S - юг, W - запад" << endl;
	cin >> buk;
	if (buk == "N")
	{
		a = 1;
	}
	else if (buk == "E")
	{
		a = 2;
	}
	else if (buk == "S")
	{
		a = 3;
	}
	else if (buk == "W")
	{
		a = 4;
	}
	cout << "Введите  команду для робота 0 - продолжить движение, 1 - поворот налево, -1 - поворот направо" << endl;
	cin >> b;
	if (b == 0)
	{
		d = a;
	}
	else if (b == 1)
	{
		if ((a <= 4) && (a > 1))
		{
			d = a - 1;
		}
		else
		{
			d = 4;
		}
	}
	else if (b == -1)
	{
		if (a == 4)
		{
			d = 1;
		}
		else
		{
			d = a + 1;
		}
	}
	switch (d)
	{
	case 1:
		cout << "Новое направление робота - север" << endl;
		break;
	case 2:
		cout << "Новое направление робота - восток" << endl;
		break;
	case 3:
		cout << "Новое направление робота - юг" << endl;
		break;
	case 4:
		cout << "Новое направление робота - запад" << endl;
		break;
	}
	cout << "____________________________________________________________________" << endl;
	
	string s1 = "учебных ", s2 = "учебное ", s3 = "занятий", s4 = "занятие", s5 = "занятия";
	cout << "Введите количество учебных занятий от 10 до 40" << endl;
	cin >> a;
	switch (a)
	{
	case 11:
		cout << "Одиннадцать " << s1 << s3 << endl;
		break;
	case 12:
		cout << "двенадцать " << s1 << s3 << endl;
		break;
	case 13:
		cout << "тринадцать " << s1 << s3 << endl;
		break;
	case 14:
		cout << "четырнадцать " << s1 << s3 << endl;
		break;
	case 15:
		cout << "пятнадцать " << s1 << s3 << endl;
		break;
	case 16:
		cout << "шестнадцать " << s1 << s3 << endl;
		break;
	case 17:
		cout << "семнадцать " << s1 << s3 << endl;
		break;
	case 18:
		cout << "восемнадцать" << s1 << s3 << endl;
		break;
	case 19:
		cout << "девятнадцать " << s1 << s3 << endl;
		break;
	case 20:
		cout << "двадцать " << s1 << s3 << endl;
		break;
	case 21:
		cout << "двадцать одно " << s2 << s4 << endl;
		break;
	case 22:
		cout << "двадцать два " << s1 << s5 << endl;
		break;
	case 23:
		cout << "двадцать три " << s1 << s5 << endl;
		break;
	case 24:
		cout << "двадцать четыре " << s1 << s5 << endl;
		break;
	case 25:
		cout << "двадцать пять " << s1 << s3 << endl;
		break;
	case 26:
		cout << "двадцать шесть " << s1 << s3 << endl;
		break;
	case 27:
		cout << "двадцать семь " << s1 << s3 << endl;
		break;
	case 28:
		cout << "двадцать восемь " << s1 << s3 << endl;
		break;
	case 29:
		cout << "двадцать девять " << s1 << s3 << endl;
		break;
	case 30:
		cout << "тридцать " << s1 << s3 << endl;
		break;
	case 31:
		cout << "тридцать одно " << s2 << s4 << endl;
		break;
	case 32:
		cout << "тридцать два " << s1 << s5 << endl;
		break;
	case 33:
		cout << "тридцать три " << s1 << s5 << endl;
		break;
	case 34:
		cout << "тридцать четыре " << s1 << s5 << endl;
		break;
	case 35:
		cout << "тридцать пять " << s1 << s3 << endl;
		break;
	case 36:
		cout << "тридцать шесть " << s1 << s3 << endl;
		break;
	case 37:
		cout << "тридцать семь " << s1 << s3 << endl;
		break;
	case 38:
		cout << "тридцать восемь " << s1 << s3 << endl;
		break;
	case 39:
		cout << "тридцать девять " << s1 << s3 << endl;
		break;
	case 40:
		cout << "сорок " << s1 << s3 << endl;
		break;
	}
	cout << "____________________________________________________________________" << endl;

	int n;
	cout << "Введите число от 100 до 999" << endl;
	cin >> n;
	switch (n / 100)
	{
	case 1:
		printf("сто ");
		break;
	case 2:
		printf("двести ");
		break;
	case 3:
		printf("триста ");
		break;
	case 4:
		printf("четыреста ");
		break;
	case 5:
		printf("пятьсот ");
		break;
	case 6:
		printf("шестьсот ");
		break;
	case 7:
		printf("семьсот ");
		break;
	case 8:
		printf("восемьсот  ");
		break;
	case 9:
		printf("девятьсот  ");
		break;
	}

	if ((n % 100) / 10 == 1)
		switch (n % 100) {
		case 10:
			printf("десять\n");
			break;
		case 11:
			printf("одинадцать\n");
			break;
		case 12:
			printf("двенадцать\n");
			break;
		case 13:
			printf("тринадцать\n");
			break;
		case 14:
			printf("четырнадцать\n");
			break;
		case 15:
			printf("пятнадцать\n");
			break;
		case 16:
			printf("шестнадцать\n");
			break;
		case 17:
			printf("семнадцать\n");
			break;
		case 18:
			printf("восемнадцать\n");
			break;
		case 19:
			printf("девятнадцать\n");
			break;
		}
	else {
		switch ((n % 100) / 10) {
		case 2:
			printf("двадцать ");
			break;
		case 3:
			printf("тридцать ");
			break;
		case 4:
			printf("сорок ");
			break;
		case 5:
			printf("пятьдесят ");
			break;
		case 6:
			printf("шестьдесят ");
			break;
		case 7:
			printf("семьдесят ");
			break;
		case 8:
			printf("восемьдесят ");
			break;
		case 9:
			printf("девяносто ");
			break;
		}

		switch (n % 10) {
		case 1:
			printf("один\n");
			break;
		case 2:
			printf("два\n");
			break;
		case 3:
			printf("три\n");
			break;
		case 4:
			printf("четыре\n");
			break;
		case 5:
			printf("пять\n");
			break;
		case 6:
			printf("шесть\n");
			break;
		case 7:
			printf("семь\n");
			break;
		case 8:
			printf("восемь\n");
			break;
		case 9:
			printf("девять\n");
			break;
		}




	}
	cout << "____________________________________________________________________" << endl;



	string greens = "зеленой ", green = "зеленого ";
	string reds = "красной ", red = "красного ";
	string yellows = "желтой ", yellow = "желтого ";
	string whites = "белой ", white = "белого ";
	string blacks = "черной ", black = "черного ";
	string aa, bb, cc, dd;
	string year = "год ";
	cout << "Введите год ";
	cin >> a;
	int undcik, yearname, chislo;
	chislo = a % 60;
	if (chislo % 12 == 0)
	{
		undcik = chislo / 12;
	}
	else
	{
		undcik = chislo / 12 + 1;     // + 1 ТАК КАК ЦИКЛ УЖЕ ИДЁТ
	}
	yearname = chislo - (undcik - 1) * 12;

	cout << undcik << " " << yearname << endl;

	switch (yearname)
	{
	case 1:
		aa = "курицы";
		break;
	case 2:
		aa = "собаки";
		break;
	case 3:
		aa = "свиньи";
		break;
	case 4:
		aa = "крысы";
		break;
	case 5:
		aa = "коровы";
		break;
	case 6:
		aa = "тигра";
		break;
	case 7:
		aa = "зайца";
		break;
	case 8:
		aa = "дракона";
		break;
	case 9:
		aa = "змеи";
		break;
	case 10:
		aa = "лошади";
		break;
	case 11:
		aa = "овцы";
		break;
	case 12:
		aa = "обезьяны";
		break;

	}
	cout << aa << " " << endl;
	if ((yearname == 6) || (yearname == 7) || (yearname == 8))
	{
		switch (undcik)
		{
		case 1:
			cout << year << green << aa << endl;
			break;
		case 2:
			cout << year << red << aa << endl;
			break;
		case 3:
			cout << year << yellow << aa << endl;
			break;
		case 4:
			cout << year << white << aa << endl;
			break;
		case 5:
			cout << year << black << aa << endl;
			break;
		}
	}
	else
	{
		switch (undcik)
		{
		case 1:
			cout << year << greens << aa << endl;
			break;
		case 2:
			cout << year << reds << aa << endl;
			break;
		case 3:
			cout << year << yellows << aa << endl;
			break;
		case 4:
			cout << year << whites << aa << endl;
			break;
		case 5:
			cout << year << blacks << aa << endl;
			break;
		}
	}
	cout << "____________________________________________________________________" << endl;
	
	return 0;
}
