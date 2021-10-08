// 0-1 Pattern :
// 1  
// 0  1  
// 1  0  1  
// 0  1  0  1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of line of 0-1 Pattern you wanna print : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sum = i+j;
            if ((sum % 2) == 0) {
                cout<<1<<"  ";
            }
            else {
                cout<<0<<"  ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}