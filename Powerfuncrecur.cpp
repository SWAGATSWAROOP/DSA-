#include<iostream>
using namespace std;

int pow(int n,int m){
    if(n>0){
        return m * pow(n-1,m);
    }
    return 1;
}

int power(int n,int m){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(n/2,m*m);
    }
    else{
        return m * power((n-1)/2,m*m);
    }
}

int main(){
    cout<<pow(26,2)<<endl<<power(26,2)<<endl;
    return 0;
}