#include<stdio.h>
//Q2
int main() {
	float studentMarks[10];
	printf("Start entering student marks:\n");
	int i;
	float sum = 0;
	float avg;
	for(i = 0; i < 10; i++){
		printf("Enter the marks of student [%d]: ", i+1);
		scanf("%f", &studentMarks[i]);
		
	}
	for(i = 0; i < 10; i++){
		sum = sum + studentMarks[i];
	}
	avg = sum / 10;
	printf("The average marks of the 10 students are: %f", avg);
	
	
	
	
	
	
	return 0;
}

