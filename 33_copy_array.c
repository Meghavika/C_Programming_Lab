#include <stdio.h>

int main() {
    int first_array[100];
    int second_array[100];
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &first_array[i]);
    }

    for (int i = 0; i < n; i++) {
        second_array[i] = first_array[i];
    }

    printf("Elements copied successfully from first array to second array.\n");

    printf("Elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", second_array[i]);
    }
    printf("\n");

    return 0;
}
