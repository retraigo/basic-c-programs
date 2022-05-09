// Remove duplicates from array

#include <stdio.h>
int linearSearch(int arr[], int len, int item) {
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

void main() {
    int n;
    printf("\nLength of array?\t");
    scanf("%d", &n);

    int myArr[n];
    for (int i = 0; i < n; ++i) {
        printf("\nValue at position #%d? ", i + 1);
        scanf("%d", &myArr[i]);
    }
    printf("\nRemoving duplicates...");
    int myNewArr[n], j = 0;
    for (int i = 0; i < n; ++i) {
        if (linearSearch(myArr, n, myArr[i]) == i + 1) {
            myNewArr[j] = myArr[i];
            ++j;
        }
    }
    printf("\nRemoved Duplicates!\n");
    for (int i = 0; i < j; ++i) {
        printf("\t%d", myNewArr[i]);
    }
    printf("\n");
}
