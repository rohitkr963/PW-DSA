#include<iostream>
using namespace std;

void digit(int x){
    int n = x%10;
    while (x>9)
    {
        x = x/10;
        
    }
    cout<< "first digit is = " <<x << endl <<"second digit is ="<<n;
    
}

int main(){
   int x;
   cin>>x;

   digit(x);
}