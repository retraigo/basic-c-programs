// Reverse a string
#include <stdio.h>

struct string {
    char value[256];
    int length;
};

void main() {
    struct string myString;
    printf("Enter the string (max 256):\t");
    scanf("%s%n", &myString.value, &myString.length);

    printf("\nReversing string '%s'!", myString.value);
    char myReversedString[myString.length];
    for (int i = myString.length - 1; i >= 0; --i) {
        myReversedString[myString.length - (i + 1)] 
        = myString.value[i];
    }
    printf("\nReversed string: '%s'\n", myReversedString);
}