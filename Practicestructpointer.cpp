#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main(){
    Rectangle *p;
    p= new Rectangle;
    p->length=12;
    p->breadth=7;
    cout<<p->length<<" "<<p->breadth<<endl;
    delete p;
    return 0;
}