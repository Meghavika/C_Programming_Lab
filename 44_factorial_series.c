#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;
    double sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}
