#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l,int m){ //Constructor 
        length = l;
        breadth = m;
    }
    int Area(){
        return length*breadth;
    }
    void changelen(int m){
        length = m;
    }
    int peri(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r(13,2);
    cout<<r.Area()<<endl;
    cout<<r.peri()<<endl;
    return 0;
}