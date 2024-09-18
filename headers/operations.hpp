#pragma once
#include <string>
#include <cmath>

#define PI 3.141592
#define EULER 2.718281
#define GOLDEN 1.618033

class Operations{
public:
    std::string publicGreet = "hello, im public.";

    std::string callPrivateGreet();

    int factorialOf(int number); // aun no implementado

    bool isPrime(int number);

    template <typename T>
    constexpr T mySqrt(T number){
        return sqrt(double(number));
    }

    template <typename T>
    constexpr T mySum(T number1, T number2){
        return number1 + number2;
    }

    template <typename T>
    constexpr T up2(T number){
        return number * number;
    }

private:
    std::string privateGreet = "hello, im private.";
};
