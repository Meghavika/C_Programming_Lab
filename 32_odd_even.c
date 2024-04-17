#include <stdio.h>

int main() {
    int array[100]; // Assuming the array size is at most 100
    int n, even_count = 0, odd_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
