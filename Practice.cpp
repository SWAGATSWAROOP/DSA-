#include<iostream>


using namespace std;

int F[20];

int mrFib(int n){
    if(n<2){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-1]==-1){
            F[n-1]=mrFib(n-1);
        }
        if(F[n-2]==-1){
            F[n-2]=mrFib(n-2);
        }
        F[n]= F[n-1]+F[n-2];
        return F[n];
    }
    
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 20; i++)
    {
        F[i] = -1;
    }
    cout<<mrFib(n)<<endl;
    
    return 0;
}