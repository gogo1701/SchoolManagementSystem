#include <iostream>
#include <string>
#include <bits/ostream.tcc>
#pragma once


class Person {
private:
    std::string name;
    int age;
public:
    Person();
    void print();
};
