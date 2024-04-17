#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &row, &col);

    int matrix1[row][col], matrix2[row][col], diff[row][col];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Finding the difference
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the result
    printf("Difference of the matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
