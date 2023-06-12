#include "linear_equation_solver.h"
#include <stdio.h>

void solveLinearEquation(float a, float b, float c, float d, float e, float f) 
{
    float D = a * d - b * c;
    float Dx = e * d - b * f;
    float Dy = a * f - e * c;

    // Kiểm tra hệ phương trình có nghiệm hay không
    if (D == 0) {
        if (Dx == 0 && Dy == 0) {
            printf("He phuong trinh vo so nghiem.\n");
        } else {
            printf("He phuong trinh vo nghiem.\n");
        }
    } else {
        // Tính nghiệm x, y
        double x = Dx / D;
        double y = Dy / D;
        printf("Nghiem cua he phuong trinh: x = %.2f, y = %.2f\n", x, y);
    }
}