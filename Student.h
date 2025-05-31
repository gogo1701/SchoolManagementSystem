#include "Person.h"

class Student : public Person {
    private:
    int grade;

public:
    void print() override;
};