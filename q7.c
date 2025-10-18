#include <stdio.h>

int main() {
    char arr[50];
    int digit[50];
    int sum = 0, j = 0;

    printf("Enter the text: ");
    scanf(" %[^\n]", arr);  // reads full line with spaces

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            digit[j] = arr[i] - '0';  // convert char to int
            sum += digit[j];
            j++;
        }
    }

    printf("\nExtracted digits are:\n");
    for (int i = 0; i < j; i++) {
        printf("%d\n", digit[i]);
    }

    printf("\nSum of extracted digits: %d\n", sum);

    return 0;
}

