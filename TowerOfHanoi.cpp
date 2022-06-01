#include<iostream>
using namespace std;

void TOH(int n,char m = 'A',char k = 'B',char z= 'C'){
    if(n>0){
        TOH(n-1,m,z,k);
        cout << m << " to " << z <<endl;
        TOH(n-1,k,m,z);
    }
}

int main(){
    TOH(3);
    return 0;
}