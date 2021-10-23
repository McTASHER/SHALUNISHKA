#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;
    float dlin, shir, diametr;
    cout << "введите длину прямоугольника\n";
    cin >> dlin;
    cout << "Введите ширину прямоугольника\n";
    cin >> shir;
    cout << "\n";
    cout << "Площадь прямоугольника =" << dlin * shir << endl;
    cout << "Периметр прямоугольника = " << 2 * (dlin + shir) << endl;
    cout << "\n";
    cout << "введите диаметр окружности" << endl;
    cin >> diametr;
    float PI = 3.14;

    cout << "длина окружности равна - " << PI * diametr << "\n" << endl;

    cout << "Введите 2 числа" << endl;

    float first, second;

    cin >> first;
    cin >> second;

    cout << "Среднее арифметическое этих чисел = " << (first + second) / 2 << "\n" << endl;

    cout << "введите 2 ненулевых числа\n";
    float zerofirst, zerosecond;
    cin >> zerofirst;
    cin >> zerosecond;
    zerofirst = zerofirst * zerofirst;
    zerosecond = zerosecond * zerosecond;


    cout << "сумма их квадратов =" << zerofirst + zerosecond << "\t" << "разность их квадратов =" << zerofirst - zerosecond << "\t " << "произведение их квадратов =" << zerofirst * zerosecond << endl;
    cout << "частное их квадратов = " << (zerofirst * zerofirst) / (zerosecond * zerosecond) << endl;
    cout << "\n";

    cout << "введите 2 новых ненулевых числа" << endl;
    cin >> zerofirst;
    cin >> zerosecond;

    float modulfirst, modulsecond;

    modulfirst = abs(zerofirst);
    modulsecond = abs(zerosecond);

    cout << "Сумма модулей = " << modulfirst + modulsecond << "\t" << "разность модулей = " << modulfirst - modulsecond << "\t" << "произведение модулей = " << modulfirst * modulsecond << "\t" << "частное модулей = " << modulfirst / modulsecond << endl;


    return 0;
}
