#include<iostream>
using namespace std;

int sumOfNum(int n){

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}

int main(){

    int n;
    cout<<"Enter a number till you want to print the sum : ";
    cin>>n;

    cout<<"Sum of first n natural number is "<<sumOfNum(n);

    cout<<endl;
    return 0;
}