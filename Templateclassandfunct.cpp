#include<iostream>
using namespace std;

template<class T>
class Arith{
    private:
    T a;
    T b;

    public:
    Arith(T a,T b);
    T add();
    T sub();
    
};

template<class T>
Arith<T>::Arith(T a,T b){
    this->a = a;
    this->b = b;
}

template<class T>
T Arith<T>::add(){
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arith<T>::sub(){
    T c;
    c = a-b;
    return abs(c);
}

int main(){
    Arith<int> a(4,5);
    cout<<a.add()<<" "<<a.sub()<<endl;
    Arith<float> ar(1.2,1.4);
    cout<<ar.add()<<" "<<ar.sub()<<endl;
    return 0;
}