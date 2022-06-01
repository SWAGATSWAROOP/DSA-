#include<iostream>
using namespace std;

double e(int x,int n){
    static double s;
    if(n==0){
        return s;
    }
    else{
        s = 1 + ((double)x/n)*s;
        return e(x,n-1);
    }
}

int main(){
    cout<<e(1,10)<<endl;
    return 0;
}