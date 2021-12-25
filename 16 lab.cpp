#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int n,N,a = 1,d = 0,b = 0,step = 0;
    int arr[100];
   
    cout << "Введите число N " << endl;
    cout << "N = ";cin >> n;
    for (int i = 0; i < n;i++)
    {

        arr[i] = a;
        cout << arr[i] << ", ";
        a += 2;
    }
    cout << "\n\n____________________________________________________________\n\n";
    
    cout << "Введите число N " << endl;
    cout << "N = ";cin >> n;
    cout << "Введите число A " << endl;
    cout << "A = ";cin >> a;
    cout << "Введите число D " << endl;
    cout << "D = ";cin >> d;

    for (int i = 0; i < n;i++)
    {
        arr[i] = a * pow(d, step);
        cout<<a<<" * "<<d<<"^"<<step<<" = " << arr[i] << ", ";
        step++;
        
    }
    cout << "\n\n____________________________________________________________\n\n";
    

    cout << "Введите число N " << endl;
    cout << "N = ";cin >> n;
    cout << "Введите число A " << endl;
    cout << "A = ";cin >> a;
    cout << "Введите число B " << endl;
    cout << "B = ";cin >> b;
    arr[0] = a;
    arr[1] = b;
    cout << arr[0] << ", " << arr[1]<<", ";
    step = a + b;
    for (int i = 2; i < n;i++)
    {    
        arr[i] = step;
        cout << arr[i] << ", ";
        step *= 2;
    }
    cout << "\n\n____________________________________________________________\n\n";
    
    cout << "Введите число N " << endl;
    cout << "N = ";cin >> n;N = n-1;
    for (int i = 0; i < n;i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << ", ";
    }
    cout << "\n\n";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << ", "<<arr[N]<<", ";
        N--;

    }
    cout << "\n\n____________________________________________________________\n\n";
    
    cout << "Введите число N " << endl;
    cout << "N = ";cin >> n;N = n-1;
    for (int i = 0; i < n;i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ", ";
    }
    cout << "\n\n";
    for (int i = 0; i < n;i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << ", ";
    }
    for (int i = N; N>=0;N--)
    {
        if (arr[N] % 2 == 0)
            cout << arr[N] << ", ";
    }
    cout << "\n\n____________________________________________________________\n\n";
    return 0;
}
