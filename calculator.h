#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <math.h>

// Arithmetic operations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

// Advanced operations
float power(float base, float exponent);
float squareRoot(float num);

// Trigonometric operations
float sine(float angle);
float cosine(float angle);
float tangent(float angle);

// Logarithmic operation
float logarithm(float num);

// Other operations
float factorial(int num);

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 == 0) {
        return 0;
    }
    return num1 / num2;
}

// Function to calculate power
float power(float base, float exponent) {
    return pow(base, exponent);
}

// Function to calculate square root
float squareRoot(float num) {
    if (num < 0) {
        return 0;
    }
    return sqrt(num);
}

// Function to calculate sine
float sine(float angle) {
    return sin(angle);
}

// Function to calculate cosine
float cosine(float angle) {
    return cos(angle);
}

// Function to calculate tangent
float tangent(float angle) {
    return tan(angle);
}

// Function to calculate logarithm
float logarithm(float num) {
    if (num <= 0) {
        return 0;
    }
    return log10(num);
}

// Function to calculate factorial
float factorial(int num) {
    int fact = 1;
    if (num < 0) {
        return 0;
    }
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


#endif /* CALCULATOR_H */
