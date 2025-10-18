#include <stdio.h>
int main() {
    int arr[12], num, j = 0;
    printf("Enter 12 numbers:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to remove: ");
    scanf("%d", &num);

    for (int i = 0; i < 12; i++) {
        if (arr[i] != num) {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("Array after removing %d:\n", num);
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

