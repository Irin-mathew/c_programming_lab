#include <stdio.h>

#define SIZE 3

void readPolynomial(int poly[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient of x^%d: ", i);
        scanf("%d", &poly[i]);
    }
}

void displayPolynomial(int poly[], int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            printf(" + ");
        }
        printf("%dx^%d", poly[i], i);
    }
    printf("\n");
}

void subtractPolynomials(int poly1[], int poly2[], int diff[], int n) {
    for (int i = 0; i < n; i++) {
        diff[i] = poly1[i] - poly2[i];
    }
}

int main() {
    int poly1[SIZE], poly2[SIZE], diff[SIZE];

    printf("Enter the first polynomial:\n");
    readPolynomial(poly1, SIZE);

    printf("Enter the second polynomial:\n");
    readPolynomial(poly2, SIZE);

    subtractPolynomials(poly1, poly2, diff, SIZE);

    printf("Difference of two polynomials is:\n");
    displayPolynomial(diff, SIZE);

    return 0;
}
