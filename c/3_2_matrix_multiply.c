#include <stdio.h>

int main() {
    int row, col;

    // Input matrix dimensions
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d %d", &row, &col);

    int matrix[row][col], transpose[col][row], result[row][row];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Multiply matrix by its transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col; k++) {
                result[i][j] += matrix[i][k] * transpose[k][j];
            }
        }
    }

    // Print the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
