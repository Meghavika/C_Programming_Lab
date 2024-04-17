#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void rowSum(int r, int c, int m[MAX_ROWS][MAX_COLS], int rs[MAX_ROWS]) {
    int i, j;
    for (i = 0; i < r; i++) {
        rs[i] = 0;
        for (j = 0; j < c; j++) {
            rs[i] += m[i][j];
        }
    }
}

void colSum(int r, int c, int m[MAX_ROWS][MAX_COLS], int cs[MAX_COLS]) {
    int i, j;
    for (j = 0; j < c; j++) {
        cs[j] = 0;
        for (i = 0; i < r; i++) {
            cs[j] += m[i][j];
        }
    }
}

int main() {
    int r, c;
    printf("Enter number of rows (up to %d): ", MAX_ROWS);
    scanf("%d", &r);
    printf("Enter number of columns (up to %d): ", MAX_COLS);
    scanf("%d", &c);

    int m[MAX_ROWS][MAX_COLS];
    int i, j;

    printf("Enter elements of the matrix (%d x %d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int rs[MAX_ROWS];
    int cs[MAX_COLS];

    rowSum(r, c, m, rs);
    colSum(r, c, m, cs);

    printf("Row sums:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d: %d\n", i+1, rs[i]);
    }

    printf("Column sums:\n");
    for (j = 0; j < c; j++) {
        printf("Column %d: %d\n", j+1, cs[j]);
    }

    return 0;
}
