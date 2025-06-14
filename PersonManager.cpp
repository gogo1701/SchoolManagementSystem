#include "PersonManager.h"
#include <iostream>
#include <algorithm>

void PersonManager::addPerson(Person* person) {
    if (person != nullptr) {
        people.push_back(std::unique_ptr<Person>(person));
    }
}

bool PersonManager::removePerson(const std::string& name) {
    auto it = std::find_if(people.begin(), people.end(),
        [&name](const std::unique_ptr<Person>& person) {
            return person->getName() == name;
        });
    
    if (it != people.end()) {
        people.erase(it);
        return true;
    }
    return false;
}

void PersonManager::printAll() const {
    if (people.empty()) {
        std::cout << "No people in the list." << std::endl;
        return;
    }
    
    for (const auto& person : people) {
        std::cout << person->toString();
    }
}

const std::vector<std::unique_ptr<Person>>& PersonManager::getAllPeople() const {
    return people;
}

size_t PersonManager::getCount() const {
    return people.size();
}