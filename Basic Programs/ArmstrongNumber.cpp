#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;
    int origNum = n;
    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem,3);
        n = n / 10;
    }

    if (sum == origNum) {
        cout<<"Given number is Armstrong Number.";
    }
    else {
        cout<<"Given number is not an Armstrong Number.";
    }
    
    cout<<endl;
    return 0;
}