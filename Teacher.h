#include "Person.h"


class Teacher : public Person {
private:
    std::string subject;
    int yearsOfExperience;
    double salary;

public:
    Teacher();

    Teacher(const std::string &name, int age, std::string subject, int yearsOfExperience, double salary);

    void print() override;

    std::string toString() override;

    void setSubject(const std::string &subject);

    void setYearsOfExperience(int yearsOfExperience);

    void setSalary(double salary);

    std::string getSubject() const;

    int getYearsOfExperience() const;

    double getSalary() const;
};
