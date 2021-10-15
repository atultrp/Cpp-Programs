#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int k = 0;

    while (n > 0)
    {
        int rem = n % 10;
        k = k * 10 + rem;
        n = n / 10;
    }

    cout << "Reverse of the given number is " << k << endl;

    return 0;
}