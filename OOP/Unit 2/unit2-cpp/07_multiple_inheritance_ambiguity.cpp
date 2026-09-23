// Concept 7: Resolving Multiple-Inheritance Ambiguity
// Aim: To resolve ambiguity when two base classes contain methods with the same name.

#include <iostream>

class Academic {
public:
    void display() const {
        std::cout << "Academic information\n";
    }
};

class Sports {
public:
    void display() const {
        std::cout << "Sports information\n";
    }
};

class Student : public Academic, public Sports {
public:
    void displayAll() const {
        Academic::display();
        Sports::display();
    }
};

int main() {
    Student student;
    student.Academic::display();
    student.Sports::display();
    student.displayAll();
    return 0;
}

/*
Expected Output:
Academic information
Sports information
Academic information
Sports information

Key learning: Use the scope-resolution operator to specify the required
base-class member:
    student.Academic::display();
    student.Sports::display();
*/
