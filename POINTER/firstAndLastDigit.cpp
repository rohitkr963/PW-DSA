#include<iostream>
using namespace std;

void find(int x,int* ptr1,int* ptr2){
    *ptr2 = x%10;
    while (x>9)
    {
        x/=10;

    }
    *ptr1 = x;
    return;
    
}

int main(){
   int x;
   cin>>x;
   int firstDigit,lastDigit;
   int* ptr1 = &firstDigit;
   int* ptr2 = &lastDigit;
   find(x,ptr1,ptr2);
    cout<<"first digit is = "<<firstDigit<<endl<<"last digit is = "<<lastDigit<<endl;
}