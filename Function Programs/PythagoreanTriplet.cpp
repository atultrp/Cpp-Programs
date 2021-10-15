#include <iostream>
using namespace std;

int greatestNum(int a, int b)
{
    int lar;

    if (a > b)
    {
        lar = a;
    }
    else
    {
        lar = b;
    }

    return lar;
}

bool checkPythagorean(int x, int y, int z){
    int b, c;
    int a = greatestNum(x, greatestNum(y, z));
    
    if (a == x){
        b = y;
        c = z;
    }
    if (a == y){
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }

    if (a*a == (b*b + c*c ))
    {
        return true;
    }
    
    else
    {
        return false;
    }

}

int main()
{

    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    
    if (checkPythagorean(a, b, c)){
        cout<<"Pythogorean Triplet";
    }
    else{
        cout<<"Not a Pythogorean Triplet";
    }

    cout << endl;
    return 0;
}