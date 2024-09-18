#include "operations.hpp"

bool Operations::isPrime(int number){
    if (number < 2) return false;
    int number_sqrt = (int)std::sqrt(number);
    for (int i = 2; i <= number_sqrt; i++){
        if (number % i == 0) return false;
    }
    return true;
}

std::string Operations::callPrivateGreet(){
    return privateGreet;
}

