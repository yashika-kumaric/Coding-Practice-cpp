#include <iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setValue(int value){
        data = value;
    }
    friend void add(X,Y);
};

class Y{
    int data;
    public:
    void setValue(int value){
        data = value;
    }
    friend void add(X,Y);
};

void add( X o1, Y o2){
    cout<<"Addition of both the numbers is "<<o1.data + o2.data;
}

int main(){
    X o1;
    o1.setValue(5);
    Y o2;
    o2.setValue(15);
    add(o1,o2);
    return 0;
}