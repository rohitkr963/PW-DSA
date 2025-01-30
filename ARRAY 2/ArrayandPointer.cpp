#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,2,5,7,1};
    int* ptr = arr;  // giving array

    cout<<ptr<<endl;
    cout<<arr[0]<<endl;

    
    for(int i = 0; i<=4; i++){
        cout<<ptr[i];
    }
   
}