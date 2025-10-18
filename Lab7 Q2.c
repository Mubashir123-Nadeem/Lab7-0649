#include <stdio.h>

int main() {
    float studentMarks[10];
    int i;
    float sum = 0, avg;

    printf("Start entering student marks:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter the marks of student [%d]: ", i + 1);
        scanf("%f", &studentMarks[i]);
        sum += studentMarks[i];
    }

    avg = sum / 10;
    printf("The average marks of the 10 students are: %.2f\n", avg);

    return 0;
}
