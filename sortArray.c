// Sorting an Array

#include <stdio.h>
void main() {
    int n;
    printf("How many numbers?\t");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; ++i) {
        printf("Number at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted items: ");
    for (int i = 0; i < n; i++) {
        printf("\n%d", arr[i]);
    }
    printf("\n");
}
