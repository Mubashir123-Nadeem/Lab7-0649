#include <stdio.h>
int main() {
    int arr[10], sorted = 1;
    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is NOT sorted in ascending order.\n");

    return 0;
}
