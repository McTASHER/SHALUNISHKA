#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;

    float X1, Y1, X2, Y2, X3, Y3;

    cout << "������� ���������� ������ �����" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "������� ���������� ������ �����" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    cout << "���������� ����� ����� ������� = " << sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) << "\n" << endl;
    cout << "_______________________________________________________________________________" << endl;
    float a, b, c;
    cout << "������� ���������� ����� A B C" << endl;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c; cout << "\n";
    cout << "AC = " << abs(c - a) << "\t\t" << "BC = " << abs(c - b) << "\t\t" << "AC + BC = " << abs((c - a) + (c - b)) << endl;
    cout << "_______________________________________________________________________________" << endl;
    cout << "������� ���������� ����� A B C" << endl;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c; cout << "\n";
    if ((a > c) || (b < c))
    {
        cout << "����� C ����� �� ����� ������� A � B\n";
    }
    else
    {
        cout << "AC = " << c - a << "\t\t" << "CB = " << b - c << "\t\t" << "AC * CB = " << (c - a) * (b - c) << endl;
    }
    cout << "_______________________________________________________________________________" << endl;

    cout << "������� ���������� ������ �����" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "������� ���������� ������ �����" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    Y3 = (abs(Y1) < abs(Y2) ? Y1 : Y2);
    X3 = (abs(X1) < abs(X2) ? X1 : X2);

    cout << "���������� 3 ����� ������������ =(" << X3 << ";" << Y3 << ")" << endl; // �������� ��� ���������� 3 ����� ���������� X � Y �� ������
    cout << " ����������� ������������ =  "; float gipotenuza = (sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2))); cout << gipotenuza << "\n" << endl;
    cout << " ������ ������� ������������ = "; float storona1 = (sqrt(pow(X1 - X3, 2) + pow(Y1 - Y3, 2))); cout << storona1 << "\n" << endl;
    cout << " ������ ������� ������������ = "; float storona2 = (sqrt(pow(X2 - X3, 2) + pow(Y2 - Y3, 2))); cout << storona2 << "\n" << endl;

    cout << "�������� ������������ = " << gipotenuza + storona1 + storona2 << endl;

    cout << "������� ������������ = " << storona1 * storona2 / 2 << endl;
    cout << "_______________________________________________________________________________" << endl;
    cout << "������� ���������� ������ �����" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "������� ���������� ������ �����" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    cout << "������� ���������� ������ �����" << endl;
    cout << "X3 ="; cin >> X3;
    cout << "Y3 ="; cin >> Y3;
    cout << "\n";

    cout << " ����������� ������������ =  ";  gipotenuza = (sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2))); cout << gipotenuza << "\n" << endl;
    cout << " ������ ������� ������������ = ";  storona1 = (sqrt(pow(X1 - X3, 2) + pow(Y1 - Y3, 2))); cout << storona1 << "\n" << endl;
    cout << " ������ ������� ������������ = ";  storona2 = (sqrt(pow(X2 - X3, 2) + pow(Y2 - Y3, 2))); cout << storona2 << "\n" << endl;

    cout << "�������� ������������ = " << gipotenuza + storona1 + storona2 << endl;

    cout << "������� ������������ = " << storona1 * storona2 / 2 << endl;

    cout << "_______________________________________________________________________________" << endl;
    return 0;
}