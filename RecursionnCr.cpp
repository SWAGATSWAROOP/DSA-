#include<iostream>
using namespace std;

int c(int n,int r){
    if((n==r) || (r==0)){
        return 1;
    }
    else{
        return (c(n-1,r) + c(n-1,r-1));
    }
}

int main(){
    int n;
    cout<<c(5,2)<<endl;
    return 0;
}