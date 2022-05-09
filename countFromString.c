// Count Vowels, whitespaces, consonants and digits in a string
#include <stdio.h>

struct string {
    char value[256];
    int length;
};

int linearSearch(char arr[], int len, char item) {
    int current;
    for (int i = 0; i < len; i++) {
        if (arr[i] == item) {
            current = i + 1;
            break;
        } else {
            current = 0;
        }
    }
    return current;
}

int isDigit(char l) {
    char digits[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    if (linearSearch(digits, 10, l) == 0) {

        return 0;
    }
    return 1;
}

int isSpace(char l) {
    char whitespace[6] = {'\t', '\n', '\r', '\v', '\f', ' '};
    if (linearSearch(whitespace, 6, l) == 0) {

        return 0;
    }
    return 1;
}

int isVowel(char l) {
    char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    if (linearSearch(vowels, 10, l) == 0)
        return 0;
    return 1;
}
int isConsonant(char l) {
    char consonants[42] = {
        'B',
        'C',
        'D',
        'F',
        'G',
        'H',
        'J',
        'K',
        'L',
        'M',
        'N',
        'P',
        'Q',
        'R',
        'S',
        'T',
        'V',
        'W',
        'X',
        'Y',
        'Z',
        'b',
        'c',
        'd',
        'f',
        'g',
        'h',
        'j',
        'k',
        'l',
        'm',
        'n',
        'p',
        'q',
        'r',
        's',
        't',
        'v',
        'w',
        'x',
        'y',
        'z'};
    if (linearSearch(consonants, 42, l) == 0)
        return 0;
    return 1;
}

void main() {
    struct string myString;
    printf("\nEnter the string to process (max 256):\t");
    scanf("%[^\n]%n", &myString.value, &myString.length);
    int consonants = 0, vowels = 0, whitespace = 0, digits = 0;
    for (int i = 0; i < myString.length; ++i) {
        if (isSpace(myString.value[i]))
            ++whitespace;
        if (isConsonant(myString.value[i]))
            ++consonants;
        if (isVowel(myString.value[i]))
            ++vowels;
        if (isDigit(myString.value[i]))
            ++digits;
    }
    printf("\nString\t%s\nVowels\t%d\nConsonants\t%d\nWhitespace\t%d\nDigits\t%d\n", myString.value, vowels, consonants, whitespace, digits);
}