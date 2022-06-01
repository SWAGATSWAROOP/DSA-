#include<iostream>
using namespace std;

template<class T>
class arithmatic{
    private:
    T a;
    T b;
    public:
    arithmatic();
    arithmatic(T a,T b);
    T add();
    T sub();
};

    template<class T>
    arithmatic<T>::arithmatic(){
        a=0;
        b=0;
    }

    template<class T>
    arithmatic<T>::arithmatic(T a,T b){
        this->a=a;
        this->b=b;
    }

    template<class T>
    T arithmatic<T>::add(){
        return a+b;
    }

    template<class T>
    T arithmatic<T>::sub(){
        return a-b;
    }

int main(){
    arithmatic<float> a1(6.6,3.6),a2(9.88,5.98);
    cout<<a1.add()<<endl;
    return 0;
}