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
    cout << "Enter number whose factorial you want to find : ";
    cin >> n;

    cout << "Factorial of given number is " << fact(n);

    cout << endl;
    return 0;
}