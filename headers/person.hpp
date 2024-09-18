#pragma once
#include <string>

class Person{
public:
    Person(std::string name, int age);

    std::string getName();

    int getAge();

private:
    std::string name;
    int age;
};