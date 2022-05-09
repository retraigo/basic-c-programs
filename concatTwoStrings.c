// Concat strings using pointers

#include <stdio.h>

struct string {
    char value[256];
    int length;
};

void main() {
    struct string myString1, myString2;
    printf("Enter the first string (max 256):\t");
    scanf("%s%n", &myString1.value, &myString1.length);

//    struct string myString2;
    printf("Enter the second string (max 256):\t");
    scanf("%s%n", &myString2.value, &myString2.length);

    char *str1 = myString1.value;
    char *str2 = myString2.value;

    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str2++;
        str1++;
    }
    *str1 = '\0';
    printf("\nNew String: %s \n", myString1.value);
}