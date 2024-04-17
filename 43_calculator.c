#include <stdio.h>
#include "calculator.h"

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", subtract(num1, num2));
    printf("Multiplication: %.2f\n", multiply(num1, num2));
    
    if (num2 != 0) {
        printf("Division: %.2f\n", divide(num1, num2));
    } else {
        printf("Division by zero is not possible.\n");
    }

    printf("Power: %.2f\n", power(num1, num2));
    
    if (num1 >= 0) {
        printf("Square Root of num1: %.2f\n", squareRoot(num1));
    } else {
        printf("Square root of a negative number is not possible.\n");
    }

    printf("Sine of num1: %.2f\n", sine(num1));
    printf("Cosine of num1: %.2f\n", cosine(num1));
    printf("Tangent of num1: %.2f\n", tangent(num1));
    
    if (num1 > 0) {
        printf("Logarithm of num1: %.2f\n", logarithm(num1));
    } else {
        printf("Logarithm of a non-positive number is not possible.\n");
    }

    if (num1 >= 0 && (int)num1 == num1) {
        printf("Factorial of num1: %.2f\n", factorial((int)num1));
    } else {
        printf("Factorial of a non-integer or negative number is not possible.\n");
    }

    return 0;
}
