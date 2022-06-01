#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
}x;

int main(){
    ::x.length=1;
    ::x.breadth=2;
    Rectangle *p=&x;
    cout<<(*p).length<<" "<<(*p).breadth<<endl;

   return 0;
}