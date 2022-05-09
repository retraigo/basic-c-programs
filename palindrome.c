// Is it a Palindrome?

#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i = num; i > 0; i = i / 10) {
        reverse = (reverse * 10) + (i % 10);
    }
    if (reverse == num) {
        printf("\nIt is a palindrome.\n");
    } else {
        printf("\nIt is not a palindrome.\n");
    }
}