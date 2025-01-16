#include<iostream>
using namespace std;


int main(){
    int x = 4;
    int* ptr = &x;
    int b = ++(*ptr);
    cout<<x<<" "<<b<<endl;
}