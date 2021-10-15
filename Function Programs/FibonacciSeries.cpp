#include <iostream>
using namespace std;

int fiboSeries(int n)
{

    int a = 0;
    int b = 1;
    int c;

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        cout << a << "\t";
        a = b;
        b = c;
    }

    return 0;
}

int main()
{

    int n;
    cout << "Enter number till you want to print the Fibonacci Series : ";
    cin >> n;

    cout << "Fibonacci Series :" << endl;
    fiboSeries(n);

    cout << endl;
    return 0;
}