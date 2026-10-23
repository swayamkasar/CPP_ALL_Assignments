#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;

    Animal animal;
    Dog dog;
    Cat cat;

    a = &animal;
    a->sound();

    a = &dog;
    a->sound();

    a = &cat;
    a->sound();

    return 0;
}
