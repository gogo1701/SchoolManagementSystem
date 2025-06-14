#include "Teacher.h"
#include <iostream>

Teacher::Teacher() : Person() {
    subject = "NOT ASSIGNED";
    yearsOfExperience = 0;
}

Teacher::Teacher(const std::string& name, int age, const std::string& subject, int yearsOfExperience)
    : Person(name, age) {
    this->subject = subject;
    this->yearsOfExperience = yearsOfExperience;
}

std::string Teacher::getSubject() const {
    return subject;
}

int Teacher::getYearsOfExperience() const {
    return yearsOfExperience;
}

void Teacher::setSubject(const std::string& newSubject) {
    subject = newSubject;
}

void Teacher::setYearsOfExperience(int years) {
    yearsOfExperience = years;
}

void Teacher::print() {
    Person::print();
    std::cout << "Subject: " << subject << ", Years of Experience: " << yearsOfExperience << std::endl;
}

std::string Teacher::toString() {
    return "Teacher:\n"
           "  Name: " + getName() + "\n"
           "  Age: " + std::to_string(getAge()) + "\n"
           "  Subject: " + subject + "\n"
           "  Years of Experience: " + std::to_string(yearsOfExperience) + "\n\n";
}