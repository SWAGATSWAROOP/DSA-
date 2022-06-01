#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void change(struct rectangle *m){
    m->breadth= 10;
    return;
}
int main(){
    rectangle r ={2,4};
    cout<<r.breadth<<endl;
    change(&r);
    cout<<r.breadth<<endl;
    return 0;
}