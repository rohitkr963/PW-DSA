#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;

    swap(a,b);

    cout<<a<<" "<<b;
}