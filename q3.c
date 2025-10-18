#include <stdio.h>
int main() {
    int age[8], youngest;
    printf("Enter ages of 8 participants:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &age[i]);
    }
    youngest = age[0];
    for (int i = 1; i < 8; i++) {
        if (age[i] < youngest)
            youngest = age[i];
    }

    printf("Youngest participant's age: %d\n", youngest);
    return 0;
}
