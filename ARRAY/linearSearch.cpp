#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"find the target value";
    cin>>target;
   
    for(int i = 0; i<n; i++){
        if(arr[i] == target ){
            cout<<"yes available at index = "<<i<<endl;
        }
    }
}
