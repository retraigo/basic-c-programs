// Sum of 10 numbers;
#include <stdio.h>

void main() {
    int n = 10, sum = 0;
    for(int i = 0; i < 10; ++i) {
        int x;
        printf("\nEnter number #%d\t", i + 1);
        scanf("%d", &x);
        sum += x;
    }
    printf("\nSum is %d", sum);
}