#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void intial(Rectangle *m){
    cin>>m->length>>m->breadth;
}

int area(Rectangle e){
    return e.length*e.breadth;
}

int perimeter(struct Rectangle f){
    return 2*(f.length+f.breadth);
}

int main(){
    Rectangle r={0,0};
    intial(&r);
    cout<<perimeter(r)<<" "<<area(r)<<endl;
    return 0;
}