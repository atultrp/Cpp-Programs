// Formula of nCr
// nCr = n!/((n-r)!*r!)

// Pattern :
// 1  
// 1  1  
// 1  2  1  
// 1  3  3  1  
// 1  4  6  4  1  

#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "nCr of the given values : "<<endl;
    int nCr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            nCr = fact(i) / (fact(i - j) * fact(j));
            cout << nCr << "  ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}