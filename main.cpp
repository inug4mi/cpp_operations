#include <iostream>
#include "operations.hpp"

const int a = 4;
const float b = 4.5;
const double c = 8.1;

const int x = 11;
const int y = 80;
const int z = 25;

int main(){
    Operations operations;
    std::cout << "Number " << x << (operations.isPrime(x) ? " is Prime" : " is not prime") << std::endl;
    constexpr int result = operations.up2(a);
    std::cout << result << std::endl;
    std::cout << operations.up2(c) << std::endl;
    std::cout << operations.mySum(a, a) << std::endl;
    std::cout << operations.mySum(c, PI) << std::endl;
    std::cout << operations.publicGreet << std::endl;
    std::cout << operations.callPrivateGreet() << std::endl;
    std::cout << "Square root of " << z << " is " << operations.mySqrt(z) << std::endl;
    return 0;
}