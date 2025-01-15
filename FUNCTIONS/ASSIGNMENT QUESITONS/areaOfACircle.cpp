#include<iostream>
using namespace std;

float circle (int r){
    float area = 3.14 * r*r;
    return area;
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
     
   cout<< circle(n);
    
}