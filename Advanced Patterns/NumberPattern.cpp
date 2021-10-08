//   Number Pattern :
//         1
//       1   2
//     1   2   3
//   1   2   3   4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of line of Number Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        int count = 1;
        for (int k = 0; k <= i; k++)
        {
            cout << count << "   ";
            count++;
        }
        cout << endl;
    }

    return 0;
}