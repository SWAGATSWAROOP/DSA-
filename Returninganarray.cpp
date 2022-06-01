#include<iostream>
using namespace std;

int * arr(int n){
    int *x = new int[n];
    for(int i=0;i<n;i++){
        x[i]=i+1;
    }
    return x;
}

int main(){
    int *z,n;
    cin>>n;
    z = arr(n);
    for(int i=0;i<n;i++){
        cout<<z[i]<<" ";
    }
    cout<<endl;
    delete z;
    return 0;
}