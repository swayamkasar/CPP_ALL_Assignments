#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class" << endl;
    }
};

int main() {
    // 1. Static Casting
    int a = 10;
    float b = static_cast<float>(a);
    cout << "Static cast: " << b << endl;

    // 2. Dynamic Casting
    Base *ptr = new Derived();
    Derived *dptr = dynamic_cast<Derived*>(ptr);

    if (dptr != nullptr) {
        dptr->display();
    }

    // 3. Const Casting
    const int x = 20;
    int *p = const_cast<int*>(&x);
    cout << "Const cast: " << *p << endl;

    // 4. Reinterpret Casting
    int num = 65;
    char *ch = reinterpret_cast<char*>(&num);
    cout << "Reinterpret cast: " << *ch << endl;

    delete ptr;

    return 0;
}

