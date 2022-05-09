// Matrix mult

#include <stdio.h>
struct Matrix {
    int rows;
    int columns;
    int data[25][25];
};
void main() {
    struct Matrix myMatrix;
    printf("\nEnter the order of the first matrix: ");
    scanf("%dx%d", &myMatrix.rows, &myMatrix.columns);

    struct Matrix myMatrix2;
    printf("\nEnter the order of the second matrix: ");
    scanf("%dx%d", &myMatrix2.rows, &myMatrix2.columns);

    if (myMatrix.columns != myMatrix2.rows) {
        printf("\n\n\nError: Order mismatch!\nColumn count of Matrix #1 should be equal to Row count of Matrix #2!\n\n");
        return;
    }
    if (myMatrix.columns > 25 || myMatrix.rows > 25 || myMatrix2.columns > 25 || myMatrix2.rows > 25) {
        printf("\n\n\nError: Order of matrices should be less than 25x25!\n\n");
        return;
    }
    if (myMatrix.columns < 0 || myMatrix.rows < 0 || myMatrix2.columns < 0 || myMatrix2.rows < 0) {
        printf("\n\n\nError: Order of matrices should be positive!\n\n");
        return;
    }
    printf("\nEnter the elements of the first matrix: \n");
    for (int i = 0; i < myMatrix.rows; ++i) {
        for (int j = 0; j < myMatrix.columns; ++j) {
            scanf("%d", &myMatrix.data[i][j]);
        }
    }
    printf("\nEnter the elements of the second matrix: \n");
    for (int i = 0; i < myMatrix2.rows; ++i) {
        for (int j = 0; j < myMatrix2.columns; ++j) {
            scanf("%d", &myMatrix2.data[i][j]);
        }
    }
    printf("\nMultiplying...\n");
    struct Matrix resultMatrix;
    resultMatrix.rows = myMatrix.rows;
    resultMatrix.columns = myMatrix2.columns;

    for (int i = 0; i < myMatrix.rows; ++i) {
        for (int j = 0; j < myMatrix2.columns; ++j) {
            resultMatrix.data[i][j] = 0;
            for (int k = 0; k < myMatrix.columns; ++k) {
                resultMatrix.data[i][j] += myMatrix.data[i][k] * myMatrix2.data[k][j];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < resultMatrix.rows; ++i) {
        for(int j = 0; j < resultMatrix.columns; ++j) {
            printf("%d\t", resultMatrix.data[i][j]);
        }
        printf("\n");
    }
}