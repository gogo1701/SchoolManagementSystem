#include "Student.h"
#include <iostream>
Student::Student() : Person(), grade(0) {}

Student::Student(const std::string& name, int age, int grade)
    : Person(name, age), grade(grade) {}

void Student::setGrade(int newGrade) {
    grade = newGrade;
}

int Student::getGrade() const {
    return grade;
}

void Student::print() {
    std::cout << this->getName() << " " << this->getAge() << " " << this->grade << std::endl;
}

std::string Student::toString() {
    return "Student:\n"
           "  Name: " + getName() + "\n"
           "  Age: " + std::to_string(getAge()) + "\n"
           "  Grade: " + std::to_string(grade) + "\n\n";
}
