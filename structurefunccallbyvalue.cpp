#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

inline int swag(struct Rectangle a){
    a.length++;
    return a.length*a.breadth;
}

int perimeter(struct Rectangle &b){
    b.breadth++;
    return 2*(b.length + b.breadth);
}

int main(){
    struct Rectangle r;
    cout<<"Enter the value of length: ";
    cin>>r.length;
    cout<<"Enter the value of breadth: ";
    cin>>r.breadth;
    cout<<abs(-2)<<endl;
    cout<<swag(r)<<endl;
    cout<<r.length<<endl;
    cout<<perimeter(r)<<endl;
    cout<<r.breadth<<endl;
    return 0;
}