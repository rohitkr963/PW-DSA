#include<iostream>
using namespace std;

void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
}
cout<<endl;
}

void change(int b[], int size){
    b[0] = 100;
}

int main(){
    int arr[] = {3,2,5,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the element of array in another function
    // updation , pass by value / pass by refrence ?
    display(arr,size);
    change(arr,size);
    display(arr,size);
}