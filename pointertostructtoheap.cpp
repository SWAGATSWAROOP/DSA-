#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};


int main(){
    struct Rectangle *p;
    p = new struct Rectangle;
    p->length=10;
    p->breadth=9;
    cout<<p->length<<" "<<sizeof(p)<<endl;
    delete p;
    return 0; 
}