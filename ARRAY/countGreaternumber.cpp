#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int a;
    cout<<"check number";
    cin>>a;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>a) count++;
    }
        cout<<count;


}