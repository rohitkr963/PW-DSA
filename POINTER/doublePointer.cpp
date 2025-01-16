#include<iostream>
using namespace std;


int main(){
    
    int x = 5;
    int* ptr = &x;
    int **p = &ptr;

    cout<<x<<endl;      // value
    cout<<*ptr<<endl;  // value
    cout<<**p<<endl;  // value
    cout<<p<<endl;   // address of ptr



    return 0;
}