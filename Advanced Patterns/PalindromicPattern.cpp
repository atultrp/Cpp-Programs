//   Palindromic Pattern :
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of line of palindromic pattern you wanna print : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n-i; j++)
        {
            cout<<"  ";
        }
        int start = i;
        for (; j < n; j++)
        {
            cout<<start--<<" ";
        }
        start = 2;
        for (j; j < n+i-1; j++)
        {
            cout<<start++<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}