#include<iostream>
using namespace std;


int countDigit (int n){
    int count =  0;
while(n){
   count++;
   n/=10;
}
   return count*count;
}

int main(){
    int a;
    cout<<"enter first number";
    cin>>a;
    cout<<"square of a digit is "<<" "<<countDigit(a);
}