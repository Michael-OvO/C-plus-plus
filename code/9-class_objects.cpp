#include <iostream>
using namespace std;

class MyClass{
    public:
        void print(){
            cout<<"This is a function inside a class"<<endl;
        }
};

int main(){
    MyClass MyObject;
    MyObject.print();
    return 0;
}