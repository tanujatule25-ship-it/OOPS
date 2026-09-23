// Concept 1: Function Overloading
// Aim: To implement compile-time polymorphism using function overloading.

#include <iostream>

int add(int first, int second) {
    return first + second;
}

double add(double first, double second) {
    return first + second;
}

int add(int first, int second, int third) {
    return first + second + third;
}

int main() {
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n';
    return 0;
}

/*
Expected Output:
Sum of two integers: 30
Sum of two doubles: 6.2
Sum of three integers: 60
*/
