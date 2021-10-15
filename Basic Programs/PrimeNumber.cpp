#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you wanna check (Prime or not) : ";
    cin >> n;

    bool flag = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Given number is Not Prime.";
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "Given number is Prime.";
    }

    cout << endl;

    return 0;
}