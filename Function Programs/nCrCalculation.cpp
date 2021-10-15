// Formula of nCr
// nCr = n!/((n-r)!*r!)

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

    int n, r;
    cout << "Enter the value of n, r : ";
    cin >> n >> r;

    cout << "nCr of the given values : ";
    float nCr;

    nCr = fact(n) / (fact(n - r) * fact(r));
    cout<<nCr;

    cout << endl;
    return 0;
}