#include <stdio.h>
#include <math.h> // для M_PI (число π)

int main() {
    double r = 3, h = 10;                 // радіус і висота циліндра
    double S = 2 * M_PI * r * h;          // площа бічної поверхні
    double V = M_PI * r * r * h;          // об'єм циліндра

    printf("S = %.1f\n", S);              // вивід площі з 1 знаком після коми
    printf("V = %.2f\n", V);              // вивід об'єму з 2 знаками після коми

    return 0;                             // завершення програми
}

