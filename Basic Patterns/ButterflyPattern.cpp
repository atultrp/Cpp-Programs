//  Pattern :
//  *                    * 
//  *  *              *  * 
//  *  *  *        *  *  * 
//  *  *  *  *  *  *  *  * 
//  *  *  *        *  *  * 
//  *  *              *  * 
//  *                    * 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of line for Butterfly Pattern : ";
    cin>>n;

    // For upper half of the Butterfly Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }

        int space = 2*n - 2*i;

        for (int j = 0; j < space; j++)
        {
            cout<<"   ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    // For lower half of the Butterfly Pattern
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }

        int space = 2*n - 2*i;

        for (int j = 0; j < space; j++)
        {
            cout<<"   ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}