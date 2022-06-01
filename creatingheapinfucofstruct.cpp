#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    //struct Rectangle *p= new Rectangle;
    struct Rectangle *p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->breadth=12;
    p->length=13;
    return p;
}

int main(){
    struct Rectangle *ptr=fun();
    cout<<ptr->breadth<<" "<<ptr->length<<endl;
    delete ptr;
    return 0;
}