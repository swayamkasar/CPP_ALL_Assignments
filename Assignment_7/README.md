Polymorphism in C++

This program demonstrates runtime polymorphism in C++ using function overriding and virtual functions.

- The "Animal" class acts as the base class and defines a virtual "sound()" function.
- The "Dog" and "Cat" classes inherit from "Animal" and override the "sound()" function.
- A base class pointer is used to point to different objects.
- The "virtual" keyword allows the appropriate function to be called at runtime based on the actual object.
- The program demonstrates how the same function call produces different outputs for different objects.

Concepts used: Inheritance, function overriding, virtual functions, pointers, and runtime polymorphism.
