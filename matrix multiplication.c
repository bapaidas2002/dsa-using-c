#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter the size of the first matrix (rows and columns): ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the size of the second matrix (rows and columns): ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int m1[row1][col1], m2[row2][col2], product[row1][col2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
