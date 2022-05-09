// Find sin(x)

#include <stdio.h>

float power(float a, int x) {
    float m = 1;
    for (int i = 0; i < x; ++i) {
        m = m * a;
    }
    return m;
}

int fact(int a) {
    if (a == 1 || a == 0)
        return a;
    return a * fact(a - 1);
}

float compute(float x, int acc, int n, float currentTerm) {
    if (!n)
        n = 1;
    if (!acc)
        return 0;
    float term = !currentTerm ? x : currentTerm < 0.0 ? (power(x, n) / fact(n)) : -(power(x, n) / fact(n));
    printf("\n%f", term);
    return term + compute(x, acc - 1, n + 2, term);
}

void main() {
    float myAngle, x;
    int accuracy;
    printf("Enter the angle to find sine of:\t");
    scanf("%f", &myAngle);
    x = myAngle * (3.142 / 180.0);
    printf("\nThe sine of %f is %f", myAngle, compute(x, 6, 1, 0.0));
}