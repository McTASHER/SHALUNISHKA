#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;
    float dlin, shir, diametr;
    cout << "������� ����� ��������������\n";
    cin >> dlin;
    cout << "������� ������ ��������������\n";
    cin >> shir;
    cout << "\n";
    cout << "������� �������������� =" << dlin * shir << endl;
    cout << "�������� �������������� = " << 2 * (dlin + shir) << endl;
    cout << "\n";
    cout << "������� ������� ����������" << endl;
    cin >> diametr;
    float PI = 3.14;

    cout << "����� ���������� ����� - " << PI * diametr << "\n" << endl;

    cout << "������� 2 �����" << endl;

    float first, second;

    cin >> first;
    cin >> second;

    cout << "������� �������������� ���� ����� = " << (first + second) / 2 << "\n" << endl;

    cout << "������� 2 ��������� �����\n";
    float zerofirst, zerosecond;
    cin >> zerofirst;
    cin >> zerosecond;
    zerofirst = zerofirst * zerofirst;
    zerosecond = zerosecond * zerosecond;


    cout << "����� �� ��������� =" << zerofirst + zerosecond << "\t" << "�������� �� ��������� =" << zerofirst - zerosecond << "\t " << "������������ �� ��������� =" << zerofirst * zerosecond << endl;
    cout << "������� �� ��������� = " << (zerofirst * zerofirst) / (zerosecond * zerosecond) << endl;
    cout << "\n";

    cout << "������� 2 ����� ��������� �����" << endl;
    cin >> zerofirst;
    cin >> zerosecond;

    float modulfirst, modulsecond;

    modulfirst = abs(zerofirst);
    modulsecond = abs(zerosecond);

    cout << "����� ������� = " << modulfirst + modulsecond << "\t" << "�������� ������� = " << modulfirst - modulsecond << "\t" << "������������ ������� = " << modulfirst * modulsecond << "\t" << "������� ������� = " << modulfirst / modulsecond << endl;


    return 0;
}