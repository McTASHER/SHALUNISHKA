#include <iostream>
#include <ctime>
#include <stdbool.h>

using namespace std;

int main()
{ 
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    
    int a,aa, b,kolvo = 0, n, k = 1,sum = 1, g, h,nod = 0, max1, min1,chislo = 0;
    double p,s = 1000;
    int mass[100];
    bool proverka = false;
    
    cout << "Введите числа А и Б, А < Б" << endl;
    cout << "A = ";cin >> a; aa = a;
    cout << "B = ";cin >> b;
    for (int i = 0; i < b - aa + 1;i++)
    {
        for (int y = 0; y < a;y++)
        {
            cout << a;
        }
        cout << " ";
        a++;
    }
    cout<<"\n\n_______________________________________________\n\n";
    
    cout << "Введите числа А и Б, А > Б" << endl;
    cout << "A = ";cin >> a; 
    cout << "B = ";cin >> b;
    while (a >= b)
    {
        kolvo++;
        a -= b;
    }
    cout << "незанятая часть А = " << a << endl;
    cout << "\n\n_______________________________________________\n\n";
    
    
    cout << "Введите число" << endl;
    cout << "N = ";cin >> n;
    
    while (sum < n)
    {   
        k++;
        sum += k;
       
    }
    cout << "K = " << k << "       Сумма = " << sum;

    cout << "\n\n_______________________________________________\n\n";
    

    cout << "Начальный вклад = 1000 руб" << endl;
    cout << "Введите процент по вкладу" << endl;
    cout << "P = ";cin >> p;
    kolvo = 0;
    while (s <= 1100)
    {
        s *= (p / 100 + 1);
        kolvo++;
    }
    cout << "Количество месяцев = " << kolvo << endl;
    cout << "Итоговый размер вклада = " << s << endl;

    cout << "\n\n_______________________________________________\n\n";
    
    cout << "Введите два целых положительных числа" << endl;
    cout << "G = ";cin >> g;
    cout << "H = ";cin >> h;
    
    
    while (max(g,h) % min(g,h) != 0)
    {
        if (g > h)
        {
            g = g % h;
        }
        else
        {
            h = h % g;
        }
              
    }
    cout << "NOD = " << min(g, h) << endl;
    cout << "\n\n_______________________________________________\n\n";
    
    cout << "Введите число фибоначчи" << endl;
    cout << "N = ";cin >> n;
    mass[0] = 1;
    mass[1] = 1;
    mass[2] = 2;
    mass[3] = 3;
    for (int i = 4; i < 50;i++)
    {
        mass[i] = mass[i - 1] + mass[i - 2];

    }
    for (int i = 0; proverka == false; i++)
    {
        cout << mass[i] << ", ";
        if (n == mass[i])
        {
            proverka = true;
            chislo = i;
        }
    }
    cout <<"- " << chislo + 1 <<" в последовательности"<< endl;
    cout << "\n\n_______________________________________________\n\n";
    return 0;
}
