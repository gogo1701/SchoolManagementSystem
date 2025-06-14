#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    std::cout << "=== PERSON INFO ===\n";
    auto* person = new Person("John Doe", 30);
    std::cout << person->toString();

    std::cout << "=== STUDENT INFO (initial) ===\n";
    auto* student = new Student("Jane Smith", 20, 5);
    person = student;
    std::cout << person->toString();

    std::cout << "=== STUDENT INFO (updated) ===\n";
    student->setName("Jane Smith");
    student->setAge(21);
    student->setGrade(6);
    std::cout << person->toString();

    auto* teacher = new Teacher("John Smith", 35, "Mathematics", 10);
    std::cout << teacher->toString();

    delete teacher;
    delete student;
    delete person;
    return 0;
}
