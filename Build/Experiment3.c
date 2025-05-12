#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1000;
    int i, j;
    
    int **matrix[n][n] = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int));
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    return 0;
}
