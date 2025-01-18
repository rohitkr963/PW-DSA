#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    int* ptr1 = &a;
    int* ptr2 = &b;
    int ptr3 = (*ptr1) * (*ptr2);

    cout<<ptr3;

    
}