// Linear Search

#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            return i;
        }
    }
    return -1;
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

    cout<<"Your element : "<<linearSearch(arr, n, x);

    cout << endl;
    return 0;
}