#include "Person.h"

class Student : public Person {
private:
    int grade;

public:
    Student();
    Student(const std::string& name, int age, int grade);


    void print() override;
    std::string toString() override;

    void setGrade(int newGrade);
    int getGrade() const;

};