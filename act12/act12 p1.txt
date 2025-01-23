#include <stdio.h>

float averageGrader(int grades[], int sizeOfGrades);

int main() {
	int numOfStud = 0;
	
	printf("Enter the number of students in a class: ");
	scanf("%d", &numOfStud);
	
	int grades[numOfStud];
	
	for(int i = 0; i < numOfStud; i++) {
		printf("Enter the student %d grade: ", i + 1);
		scanf("%d", &grades[i]);
	}
	
	printf("\nThe average grade of this class is %.2f", averageGrader(grades, numOfStud));
	
	return 0;
}

float averageGrader(int grades[], int sizeOfGrades) {
	int totalGrades = 0;
	
	for(int i = 0; i < sizeOfGrades; i++) {
		totalGrades += grades[i];
	}
	
	float average = totalGrades / sizeOfGrades;

	
	return average;
}