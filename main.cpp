#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
    Person p = Person();
    p.print();

    Person* student = new Student();
    student->print();
}
