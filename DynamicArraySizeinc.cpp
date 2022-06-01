#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *p = new int [n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int* q = new int  [n+5];
    for(int i=0;i<n+5;i++){
        cin>>q[i];
    }
    delete [] p;
    p = q;
    q = NULL;
    for(int i=0;i<n+5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<p[2]<<endl;
    delete [] p;
    p = NULL;
    return 0;
}