#include<iostream>
using namespace std;

void reverseString(string s){
    if (s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    reverseString(ros);
    cout<<s[0];
}

int main(){

    string str;
    cout<<"Enter the string, you want to reverse : ";
    cin>>str;

    reverseString(str);

    cout<<endl;
    return 0;
}