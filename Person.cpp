#include "Person.h"

Person::Person() {
    name = "NOT AVAILABLE";
    age = 0;
}

void Person::print() {
    std::cout << name << " " << age << std::endl;
}