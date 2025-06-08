#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    std::cout << "========== PERSON INFO ==========\n";
    Person *person = new Person("John Doe", 30);
    std::cout << person->toString();
    delete person;

    std::cout << "\n========== STUDENT INFO (Initial) ==========\n";
    Student *student = new Student("Jane Smith", 20, 5);
    person = student;
    std::cout << person->toString();

    std::cout << "\n========== STUDENT INFO (Updated) ==========\n";
    student->setAge(21);
    student->setGrade(6);
    std::cout << person->toString();
    delete student;

    std::cout << "\n========== TEACHER INFO ==========\n";
    Teacher *teacher = new Teacher("Dr. Alice Brown", 45, "Mathematics", 20, 56000.0);
    person = teacher;
    std::cout << person->toString();
    delete teacher;

    return 0;
}
