#pragma once
#include <iostream>
#include <string>

class Person {
protected:
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
};