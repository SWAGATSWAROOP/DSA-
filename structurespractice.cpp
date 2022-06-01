#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
    char x;
};

int main(){
    struct Rectangle r1={1,2};
    r1.length=15;
    r1.breadth=7;
    r1.x='f';
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<r1.x<<endl;

    return 0;
}