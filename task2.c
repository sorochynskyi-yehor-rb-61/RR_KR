#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long calculateMainDiagonalProduct(int n, int a, int matrix[n][n]);

int main() {
    printf("=== ROZRAKHUNKOVA ROBOTA. VARIANT 17 (Zavdannya 2) ===\n");
    printf("Vykonav: student hrupy rs-z51 Sorochynskyi Ye.R.\n\n");

    int N2;
    printf("Vvedit rozmirnist kvadratnoyi matrytsi N x N: ");
    if (scanf("%d", &N2) != 1 || N2 <= 0) {
        printf("Error: rozmirnist maye buty dodatnym chyslom.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));

    int matrix_a = (rand() % (12 - 5 + 1)) + 5;
    printf("Zhenerovano vypadkove chyslo a dlya matrytsi (meji -%d...%d): %d\n\n", matrix_a, matrix_a, matrix_a);

    int A[N2][N2];

    printf("Zhenerovana matrytsya A (%dx%d):\n", N2, N2);
    for (int i = 0; i < N2; i++) {
        for (int j = 0; j < N2; j++) {
            A[i][j] = (rand() % (2 * matrix_a + 1)) - matrix_a;
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    long long product = calculateMainDiagonalProduct(N2, matrix_a, A);
    printf("\nDobutok elementiv, scho znakhodyatsya na holovniy diahonali = %lld\n", product);

    return 0;
}

long long calculateMainDiagonalProduct(int n, int a, int matrix[n][n]) {
    long long prod = 1;
    for (int i = 0; i < n; i++) {
        prod *= matrix[i][i];
    }
    return prod;
}
