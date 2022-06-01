#include<iostream>
using namespace std;

int x=0; //Global Variable 

int fun(int n){
    // static int x =0;
    if(n>0){
        ::x++; // x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r = fun(5);
    printf("%d\n",r);
    r = fun(5);
    printf("%d\n",r);
    return 0;
}