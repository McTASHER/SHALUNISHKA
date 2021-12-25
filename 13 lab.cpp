#include <iostream>
#include <ctime>

using namespace std;

int main()
{ 
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    double a;
    int x, n = 0;
    double s = 1, summ = 1,Schet = 0,Snechet = 0;
    cout << "введите стоимость 1 кг конфет - ";cin >> a;
    for (int i = 0; i < 1; i++)
    {
        for (double f = 0.1; f < 1; f += 0.1)
        {
            cout << f << " кг конфет стоят " << a * f << endl;
        }
    }
    cout << "\n_________________________________________________________";
    cout << "\n\n";
    
    double b = 1.1,q;
    cout << "Введите количество сомножителей - ";cin >> x;
    for (int i = 0; i < x - 1; i++)
    {
        // x = 1;
        cout << b << " * ";               
        q = b * b;
        b += 0.1;
    }
    cout<<b<<" = ";
    cout << q << endl;
    cout << "\n_________________________________________________________";
    cout << "\n\n";
    
    cout << "введите число для возведения в квадрат - ";cin >> a;
    while ((summ / a) != a)
    {
        n++;
     
        cout << s << " + ";
        s += 2;
        summ += s;
    }
    cout << s << " = " << summ << endl;
    cout << "\n_________________________________________________________";
    cout << "\n\n";
    
    cout << "введите число А и его индекс" << endl;
    cout << "A = ";cin >> a;
    cout << "Индекс = ";cin >> n;
    s = 0; summ = 0;
    for (int i = 0; i < n; i++)
    {
        cout << pow(a, i) << " + ";
        summ += pow(a, i);
    }
    cout << pow(a, n) << " = " << summ + pow(a, n);
    cout << "\n_________________________________________________________";
    cout << "\n\n";
    
    cout << "введите число А и его индекс" << endl;
    cout << "A = ";cin >> a;
    cout << "Индекс = ";cin >> n;
    summ = 0;
    int chet = 0;
    int nechet = 1;
    for (chet, nechet; (nechet < n) || (chet < n); nechet+= 2, chet+= 2)
    {
        // отриц степень
        cout << pow(a, chet) << " - " << pow(a, nechet) << " + ";                        
        Schet += pow(a, chet);
        Snechet -= pow(a, nechet);
    }
    if (n % 2 == 0)
    {
        cout << pow(a, n) << " = " << Schet + Snechet + pow(a, n) << endl;
    }
    else
    {
        cout<< "= " << Schet + Snechet << endl;
    }
    cout << "\n_________________________________________________________";
    cout << "\n\n";
    
    
    return 0;
}
