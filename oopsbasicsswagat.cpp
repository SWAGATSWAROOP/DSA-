#include<iostream>
using namespace std;

struct Rectangle{
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
    Rectangle r={0,0};
    r.intial();
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    return 0;
}