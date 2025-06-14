#pragma once
#include "Person.h"
#include <vector>
#include <memory>

class PersonManager {
private:
    std::vector<std::unique_ptr<Person>> people;

public:
    void addPerson(Person* person);
    
    bool removePerson(const std::string& name);
    
    void printAll() const;
    
    const std::vector<std::unique_ptr<Person>>& getAllPeople() const;
    
    size_t getCount() const;
    
    ~PersonManager() = default;
};