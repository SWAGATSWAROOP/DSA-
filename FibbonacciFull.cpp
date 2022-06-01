#include<iostream>
using namespace std;

int f(int n){
    if(n<2){
        return n;
    }
    int s;
    int s1 = 0;
    int s2 = 1;
    for(int i=2;i<=n;i++){
       s = s1+s2;
       s1 =  s2;
       s2 = s;
    }
    return s;
}

int F[10];

int mFib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=mFib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=mFib(n-1);
        }
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int fiR(int n){
    if(n<2){
        return n;
    }
    return fiR(n-2) + fiR(n-1);
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
   // cout<<f(n)<<endl;
   // cout<<fiR(n)<<endl;
    cout<<mFib(n)<<endl;
    /*for(int x:F){
        cout<<x<<endl;
    }*/
    return 0;
}