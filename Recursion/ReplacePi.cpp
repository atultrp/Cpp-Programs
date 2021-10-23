#include<iostream>
using namespace std;

void replacePi(string s){
    if (s.length() == 0){
        return;
    }

    else if (s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }

    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

int main(){

    string str;
    cout<<"Enter a string where you want to replace pi characters to the 3.14 : ";
    cin>>str;

    replacePi(str);

    cout<<endl;
    return 0;
}