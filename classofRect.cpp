#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;

    void intial(){
        cin>>breadth>>length;
    }

    int area(){
       return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle m={0,0};
    m.intial();
    cout<<m.area()<<" "<<m.perimeter()<<endl;
    return 0;
}