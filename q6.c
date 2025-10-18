#include <stdio.h>
int main() {
    int profit[10], sum = 0;
    printf("Enter 10 integers (daily profit/loss):\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &profit[i]);
        if (profit[i] > 0)
            sum += profit[i];
    }

    printf("Sum of positive profits: %d\n", sum);
    return 0;
}
