#include <stdio.h>

int main() {
    int array[100];
    int frequency[100] = {0}; // Initialize frequency array with zeros
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Counting frequencies of elements
    for (int i = 0; i < n; i++) {
        if (frequency[i] == -1) // Skip elements already counted
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = -1; // Mark the element as counted
            }
        }
        frequency[i] = count;
    }

    // Displaying frequencies
    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (frequency[i] != -1) { // Skip elements already counted
            printf("%d\t%d\n", array[i], frequency[i]);
        }
    }

    return 0;
}
