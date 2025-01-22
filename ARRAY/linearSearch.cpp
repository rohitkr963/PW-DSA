#include<iostream>
using namespace std;

int main(){
    int n,target;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"find the target value : ";
    cin>>target;
   

   bool flag = false;   
    for(int i = 0; i<n; i++){
        if(arr[i] == target )  flag = true;
    }
    if(flag == true) cout<<"yes available"<<endl;
    else cout<<"not available";
}
