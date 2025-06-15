#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    //Creating a constructor
    Complex(void);
    void printNumber(void){
        cout<<"The complex number is "<<a<<" + "<<b<<"i";
    }
};

Complex :: Complex(void){ // ---> This is a default constructor as it takes no parameters
    a =10;
    b=0;
}

int main() {
    Complex c1;
    c1.printNumber();
    return 0;
}

/*
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They can't return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/