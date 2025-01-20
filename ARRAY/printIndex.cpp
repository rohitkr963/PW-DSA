#include<iostream>
using namespace std;

int main(){
    int arr[5] = {23,40,44,21,33};

    for(int i = 0; i<=4; i++){
        if(arr[i]<35){
            cout<<i;
        }
    }
}

