#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Meghavika Baidya 21BLC1667\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
