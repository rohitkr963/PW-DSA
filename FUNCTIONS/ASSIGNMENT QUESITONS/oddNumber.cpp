#include<iostream>
using namespace std;

void square (int n,int r){
    for(int i = n; i<=r; i++){
        if(i%2!=0)
        {
        cout<<i<<" ";
        }
    }
    
}

int main(){
    int a;
    cout<<"enter first number";
    cin>>a;
     int b;
    cout<<"enter second number";
    cin>>b;
    square(a,b);
}