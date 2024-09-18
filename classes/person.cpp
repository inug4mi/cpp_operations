#include "person.hpp"
#include <iostream>

Person::Person(std::string name, int age): _name(name), _age(age){

}

std::string Person::getName(){
    return _name;
}

int Person::getAge(){
    return _age;
}

void Person::setName(std::string name){
    _name = name;
}

void Person::setAge(int age){
    _age = age;
}

void Person::showInfo(){
    std::cout << "Name: " << getName() << "," << " Age: " << getAge() << std::endl;
}