#include <stdio.h>

int main() {
    printf("=== ROZRAKHUNKOVA ROBOTA. VARIANT 17 (Zavdannya 1) ===\n");
    printf("Vykonav: student hrupy rs-z51 Sorochynskyi Ye.R.\n\n");

    int N;
    double S = 0.0;

    printf("Vvedit cile chyslo N (N >= 1): ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Pomylka: N maye buty cilym chyslom >= 1.\n");
        return 1;
    }

    for (int n = 1; n <= N; n++) {
        S += 1.0 / n;
    }

    printf("Suma ryadu S = %.6f\n", S);

    return 0;
}
