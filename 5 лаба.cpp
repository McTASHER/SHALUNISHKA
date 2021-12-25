#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;

    float X1, Y1, X2, Y2, X3, Y3;

    cout << "ââåäèòå êîîðäèíàòû ïåðâîé òî÷êè" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "ââåäèòå êîîðäèíàòû âòîðîé òî÷êè" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    cout << "ðàññòîÿíèå ìåæäó ýòèìè òî÷êàìè = " << sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) << "\n" << endl;
    cout << "_______________________________________________________________________________" << endl;
    float a, b, c;
    cout << "Ââåäèòå êîîðäèíàòû òî÷åê A B C" << endl;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c; cout << "\n";
    cout << "AC = " << abs(c - a) << "\t\t" << "BC = " << abs(c - b) << "\t\t" << "AC + BC = " << abs((c - a) + (c - b)) << endl;
    cout << "_______________________________________________________________________________" << endl;
    cout << "Ââåäèòå êîîðäèíàòû òî÷åê A B C" << endl;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c; cout << "\n";
    if ((a > c) || (b < c))
    {
        cout << "òî÷êà C ñòîèò íå ìåæäó òî÷êàìè A è B\n";
    }
    else
    {
        cout << "AC = " << c - a << "\t\t" << "CB = " << b - c << "\t\t" << "AC * CB = " << (c - a) * (b - c) << endl;
    }
    cout << "_______________________________________________________________________________" << endl;

    cout << "ââåäèòå êîîðäèíàòû ïåðâîé òî÷êè" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "ââåäèòå êîîðäèíàòû âòîðîé òî÷êè" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    Y3 = (abs(Y1) < abs(Y2) ? Y1 : Y2);
    X3 = (abs(X1) < abs(X2) ? X1 : X2);

    cout << "êîîðäèíàòà 3 òî÷êè òðåóãîëüíèêà =(" << X3 << ";" << Y3 << ")" << endl; // âûáèðàåì äëÿ êîîðäèíàòû 3 òî÷êè íàèìåíüøèé X è Y ïî ìîäóëþ
    cout << " Ãèïïîòåíóçà òðåóãîëüíèêà =  "; float gipotenuza = (sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2))); cout << gipotenuza << "\n" << endl;
    cout << " ïåðâàÿ ñòîðîíà òðåóãîëüíèêà = "; float storona1 = (sqrt(pow(X1 - X3, 2) + pow(Y1 - Y3, 2))); cout << storona1 << "\n" << endl;
    cout << " âòîðàÿ ñòîðîíà òðåóãîëüíèêà = "; float storona2 = (sqrt(pow(X2 - X3, 2) + pow(Y2 - Y3, 2))); cout << storona2 << "\n" << endl;

    cout << "ïåðèìåòð òðåóãîëüíèêà = " << gipotenuza + storona1 + storona2 << endl;

    cout << "Ïëîùàäü òðåóãîëüíèêà = " << storona1 * storona2 / 2 << endl;
    cout << "_______________________________________________________________________________" << endl;
    cout << "ââåäèòå êîîðäèíàòû ïåðâîé òî÷êè" << endl;
    cout << "X1 ="; cin >> X1;
    cout << "Y1 ="; cin >> Y1;
    cout << "\n";


    cout << "ââåäèòå êîîðäèíàòû âòîðîé òî÷êè" << endl;
    cout << "X2 ="; cin >> X2;
    cout << "Y2 ="; cin >> Y2;
    cout << "\n";

    cout << "ââåäèòå êîîðäèíàòû âòîðîé òî÷êè" << endl;
    cout << "X3 ="; cin >> X3;
    cout << "Y3 ="; cin >> Y3;
    cout << "\n";

    cout << " Ãèïïîòåíóçà òðåóãîëüíèêà =  ";  gipotenuza = (sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2))); cout << gipotenuza << "\n" << endl;
    cout << " ïåðâàÿ ñòîðîíà òðåóãîëüíèêà = ";  storona1 = (sqrt(pow(X1 - X3, 2) + pow(Y1 - Y3, 2))); cout << storona1 << "\n" << endl;
    cout << " âòîðàÿ ñòîðîíà òðåóãîëüíèêà = ";  storona2 = (sqrt(pow(X2 - X3, 2) + pow(Y2 - Y3, 2))); cout << storona2 << "\n" << endl;

    cout << "ïåðèìåòð òðåóãîëüíèêà = " << gipotenuza + storona1 + storona2 << endl;

    cout << "Ïëîùàäü òðåóãîëüíèêà = " << storona1 * storona2 / 2 << endl;

    cout << "______________________________________________________________________________" << endl;
    return 0;
}
