#include "Teacher.h"
#include <iostream>

Teacher::Teacher() : Person(), subject(""), yearsOfExperience(0), salary(0.0) {
}

Teacher::Teacher(const std::string &name, int age, std::string subject, int yearsOfExperience, double salary)
    : Person(name, age), subject(subject), yearsOfExperience(yearsOfExperience), salary(salary) {
}

void Teacher::setSubject(const std::string &subject) {
    this->subject = subject;;
}

void Teacher::setYearsOfExperience(int yearsOfExperience) {
    this->yearsOfExperience = yearsOfExperience;
}

void Teacher::setSalary(double salary) {
    this->salary = salary;
}

std::string Teacher::getSubject() const {
    return subject;
}

int Teacher::getYearsOfExperience() const {
    return yearsOfExperience;
}

double Teacher::getSalary() const {
    return salary;
}

void Teacher::print() {
    std::cout << this->getName() << " " << this->getAge() << " "
            << this->subject << " " << this->yearsOfExperience << " "
            << this->salary << std::endl;
}

std::string Teacher::toString() {
    return "Teacher:\n"
           "  Name: " + getName() + "\n"
           "  Age: " + std::to_string(getAge()) + "\n"
           "  Subject: " + subject + "\n"
           "  Years of Experience: " + std::to_string(yearsOfExperience) + "\n"
           "  Salary: $" + std::to_string(salary) + "\n\n";
}
