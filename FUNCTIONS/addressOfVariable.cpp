#include<iostream>
using namespace std;

int res( int x,int y){
    cout<<"address of res x"<<&x<<endl;
    cout<<"address of res y"<<&y<<endl;
}


int main(){
    int x =8;
    int y = 9;

    cout<<"address of main x"<<&x<<endl;
    cout<<"address of main y"<<&y<<endl;
    res(x,y);
   
}