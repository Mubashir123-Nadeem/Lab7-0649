#include<stdio.h>
////Q1
int main() {
	int i;
	int employeesID[12];
	printf("Enter the employeeIDs: \n");
	for(i=0; i<12; i++){
		printf("Enter the employeeIDs [%d]: \n", i+1);
		scanf("%d", &employeesID[i]);
	}
	
	int checkID;
	int index;
	int isFound = 0;
	printf("Enter the ID to find: ");
	scanf("%d", &checkID);
	for(i=0; i<12; i++){
		if(employeesID[i] == checkID) {
			isFound = 1;
			index = i;
			break;
		}
	}
	if (isFound)
		printf("The employeeId exists at index %d", index);
	else
		printf("EmployeeID not found");
	
	
	
	
	return 0;
}






















