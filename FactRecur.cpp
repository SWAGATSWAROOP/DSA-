#include<iostream>
using namespace std;

int fact(int n){
    if(n>1){
        return n * fact(n-1);
    }
    return 1;
}

int itrfac(int n){
    int s=1;
    if(n<2){
        return 1;
    }
    for(int i=n;i>1;i--){
        s*=i;
    }
    return s;
}

int main(){
    cout<<fact(5)<<endl;
    cout<<itrfac(5)<<endl;
    cout<<itrfac(0)<<endl;
    return 0;
}