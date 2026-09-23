// Concept 4: Prefix and Postfix Increment Operator Overloading
// Aim: To overload prefix and postfix increment operators.

#include <iostream>

class Counter {
private:
    int value;

public:
    explicit Counter(int initialValue = 0) : value(initialValue) {}

    // Prefix
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix
    Counter operator++(int) {
        Counter old = *this;
        ++value;
        return old;
    }

    void display() const {
        std::cout << value << '\n';
    }
};

int main() {
    Counter counter(5);

    std::cout << "After prefix increment: ";
    ++counter;
    counter.display();

    std::cout << "Value returned by postfix increment: ";
    Counter oldValue = counter++;
    oldValue.display();

    std::cout << "Counter after postfix increment: ";
    counter.display();

    return 0;
}

/*
Expected Output:
After prefix increment: 6
Value returned by postfix increment: 6
Counter after postfix increment: 7
*/
