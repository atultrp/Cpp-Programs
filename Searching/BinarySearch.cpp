// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int l = 0;
    int u = n;

    while (l <= u)
    {
        int m = (l + u) / 2;
        // cout << m << endl;
        if (arr[m] == x)
        {
            cout << "found at " << m << " position";
            break;
        }
        else if (x > arr[m])
        {
            l = m + 1;
        }
        else
        {
            u = m - 1;
        }
    }

    return 0;
}

int main()
{

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n], x;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find from the array : ";
    cin >> x;

    binarySearch(arr, n, x);

    cout << endl;
    return 0;
}