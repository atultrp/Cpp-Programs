//    Pattern :
//              * 
//           *  * 
//        *  *  * 
//     *  *  *  * 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of line of Half Pyramid (180 degree) you want to print : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n-i){
                cout<<"   ";
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}