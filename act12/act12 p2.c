#include <stdio.h>
#include <math.h>

void bmiClassifier(float weight, float height);


int main() {
	float weight = 0, height = 0;
	
	printf("Enter weight in kilograms: ");
	scanf("%f", &weight);
	
	printf("Enter height in meters: ");
	scanf("%f", &height);
	
	bmiClassifier(weight, height);
	
	return 0;
	
	
	
}

void bmiClassifier(float weight, float height) {
	float bmi = weight / pow(height, 2);
	
	printf("\nYour BMI is: %.2f", bmi);
	printf("\nClassification: %s", bmi < 18.5 ? "Underweight" : bmi < 24.9 ? "Normal Weight" : bmi < 29.9 ? "Overweight" : "Obese");
}