#include<iostream>
using namespace std;

int fact( int n){
    int f =1;
    for(int i = 2; i<=n; i++){
        f*=i;
    }
    return f;
}

int combination(int i,int j){
    int ncr = fact(i)/(fact(j)*fact(i-j));
    return ncr;
}
int main(){
    int x;
    cin>>x;

    for(int i = 0; i<=x; i++){
        for(int j = 0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}