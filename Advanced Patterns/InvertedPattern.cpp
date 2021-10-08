// Inverted Pattern :
// 1  2  3  4  5  
// 1  2  3  4  
// 1  2  3  
// 1  2  
// 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of line of Inverted Pattern you wanna print : ";
    cin>>n;

    for (int i = n; i > 0; i--)
    {
        int count = 1;
        for (int j = 0; j < i; j++)
        {
            cout<<count<<"  ";
            count++;
        }
        cout<<endl;
    }
    

    return 0;
}