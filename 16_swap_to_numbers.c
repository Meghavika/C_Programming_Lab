#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Meghavika Baidya 21BLC1667\n");
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
