// Concept 13: Virtual Destructor
// Aim: To demonstrate correct destruction of a derived object through a base pointer.

#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Base* pointer = new Derived();
    delete pointer;
    return 0;
}

/*
Expected Output:
Derived destructor
Base destructor

Modern alternative:
#include <memory>
std::unique_ptr<Base> pointer = std::make_unique<Derived>();
A virtual destructor is still required in a polymorphic base class.
*/
