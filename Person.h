#pragma once
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person();
    Person(const std::string& newName, int newAge);
    virtual ~Person() = default;

    virtual void print();

    // Getters
    std::string getName() const;
    int getAge() const;

    // Setters
    void setName(const std::string& newName);
    void setAge(int newAge);

    virtual  std::string toString();
};