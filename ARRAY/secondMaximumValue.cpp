#include<iostream>
using namespace std;

int main(){
    int n,secondMax;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
 
    secondMax = arr[0];
     for(int i = 1; i<n; i++){
        if(secondMax < arr[i]  && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
        cout<<"maximum value is : "<<secondMax;

}