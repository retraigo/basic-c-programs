// C program to print first n prime numbers.
#include <stdio.h>

// Returns 1 if Prime, 0 if not.
int isPrime(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
void main() {
    int currentNum = 1, limit;
    printf("How many prime numbers to print?\t");
    scanf("%d", &limit);
    printf("The first %d prime numbers are as follows:", limit);
    while (limit > 0) {
        if (isPrime(currentNum) == 1 && currentNum != 1) {
            printf("\n%d", currentNum);
            --limit;
        }
        ++currentNum;
    }
}
