#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void change(Rectangle m){
    cout<<m.length<<" "<<m.breadth<<endl;
}

int main(){
    Rectangle r={1,2};
    change(r);
    return 0;
}