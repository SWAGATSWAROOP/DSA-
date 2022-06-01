#include<iostream>
using namespace std;

struct fun{
    int arr[3];
    int z;
};

void f(struct fun *m){
    m->arr[0]=10;
    m->arr[1]=2;
    cout<<m->arr[0]<<" "<<m->arr[1]<<endl;
}

void fun(struct fun m){
    m.arr[0]=10;
    m.arr[1]=2;
    cout<<m.arr[0]<<" "<<m.arr[1]<<endl;
}

int main(){
    struct fun l={{1,2,4},5};
    fun(l);
    cout<<l.arr[0]<<" "<<l.arr[1]<<endl;
    f(&l);
    cout<<l.arr[0]<<" "<<l.arr[1]<<endl;
    return 0;
}