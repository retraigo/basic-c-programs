// Decimal To Binary
// Binary To Decimal

#include <stdio.h>

int power(int a, int x) {
    int m = 1;
    for (int i = 0; i < x; ++i) {
        m = m * a;
    }
    return m;
}

void main() {
    int choice;
    printf("\n1: Binary to Decimal\n2: Decimal to Binary\n");
    scanf("%d", &choice);

    // Decimal To Binary

    if (choice == 2) {
        int deci;
        printf("Enter a number: ");
        scanf("%d", &deci);
        long long num = 0, i = 0;
        long long m = 1;
        for (int n = deci; n > 0; n /= 2) {
            num = num + ((n % 2) * m);
            m *= 10;
            ++i;
        }
        printf("\nThe binary value of %d is %lld", deci, num);
    }
    // Binary To Decimal
    else {
        long long num;
        printf("Enter a binary number: ");
        scanf("%lld", &num);
        int deci = 0, i = 0;
        for (long long n = num; n > 0; n /= 10) {
            deci += (n % 10) * power(2, i);
            ++i;
        }
        printf("\nThe decimal value of %lld is %d", num, deci);
    }
}
