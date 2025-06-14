#pragma once
#include "Person.h"
#include <string>

class Teacher : public Person {
private:
    std::string subject;
    int yearsOfExperience;

public:
    Teacher();
    Teacher(const std::string& name, int age, const std::string& subject, int yearsOfExperience);

    // Getters
    std::string getSubject() const;
    int getYearsOfExperience() const;

    // Setters
    void setSubject(const std::string& newSubject);
    void setYearsOfExperience(int years);

    void print() override;
    std::string toString() override;
};