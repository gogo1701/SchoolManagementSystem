#include "Person.h"

Person::Person() {
    name = "NOT AVAILABLE";
    age = 0;
}

Person::Person(const std::string &name, int age) {
    this->name = name;
    this->age = age;
}

void Person::print() {
    std::cout << name << " " << age << std::endl;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setName(const std::string &newName) {
    name = newName;
}

void Person::setAge(int newAge) {
    age = newAge;
}
