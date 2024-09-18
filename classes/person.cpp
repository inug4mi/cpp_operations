#include "person.hpp"

Person::Person(std::string name, int age): name(name), age(age){

}

std::string Person::getName(){
    return name;
}

int Person::getAge(){
    return age;
}