// Concept 3: Public versus Private Inheritance
// Aim: To observe the effect of public and private inheritance on accessibility.

#include <iostream>

class Base {
public:
    void show() const {
        std::cout << "Base public function\n";
    }
};

class PublicDerived : public Base {
};

class PrivateDerived : private Base {
public:
    void callBaseShow() const {
        show();
    }
};

int main() {
    PublicDerived publicObject;
    publicObject.show();

    PrivateDerived privateObject;
    privateObject.callBaseShow();
    // privateObject.show(); // Error: show() is private through private inheritance.

    return 0;
}

/*
Expected Output:
Base public function
Base public function

Key learning:
- In public inheritance, public base members stay public through the derived object.
- In private inheritance, public and protected base members become private in the derived class.
*/
