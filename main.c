#include "linear_equation_solver.h"
#include <stdio.h>

int main() {
    float a, b, c, d, e, f;

    printf("Nhap cac he so a, b, c, d, e, f:\n");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    solveLinearEquation(a, b, c, d, e, f);

    return 0;
}