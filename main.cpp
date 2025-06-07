#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
    std::cout << "=== PERSON INFO ===\n";
    Person* person = new Person("John Doe", 30);
    std::cout << person->toString();

    std::cout << "=== STUDENT INFO (initial) ===\n";
    Student* student = new Student("Jane Smith", 20, 5);
    person = student;
    std::cout << person->toString();

    std::cout << "=== STUDENT INFO (updated) ===\n";
    student->setName("Jane Smith");
    student->setAge(21);
    student->setGrade(6);
    std::cout << person->toString();

    delete person;
    return 0;
}
