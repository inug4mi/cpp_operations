#pragma once
#include <string>

class Person{
public:
    Person(std::string name, int age);

    std::string getName();

    int getAge();

    void setName(std::string);

    void setAge(int age);

    void showInfo();

private:
    std::string _name;
    int _age;
};