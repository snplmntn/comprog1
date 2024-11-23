#include <stdio.h>
#include <stdlib.h>

int main() {
	int choice = 0, num;
	
	printf("Temperature Converter\n\n");
    printf("1. Celsius to Farenheit\n");
    printf("2. Farenheit to Celsius\n");
    
    while (choice != 1 && choice != 2) {
    	printf("\nChoose conversion (1 or 2): ");
    	scanf("%d", &choice);
    	
    	if(choice != 1 && choice != 2) {
    		printf("\nInvalid Choice, Please input 1 or 2");
		}
	}
    
    printf("\nHow many temperatures do you want to convert?: ");
    scanf("%d", &num);
    
    printf("\nEnter %d temperatures:\n", num);
    
	float temperatures[num];
    
    for(int i = 0; i < num; i++){
        scanf(" %f", &temperatures[i]);
    }

    printf("\nConverted Temperatures:\n");
    
    float convertedTemperatures[sizeof(temperatures) / sizeof(temperatures[0])];
	
	for(int i = 0; i < num; i++) {
    	if(choice == 1) 
    		convertedTemperatures[i] = (1.8 * temperatures[i]) + 32;
    	else 
    		convertedTemperatures[i] = 0.56 * (temperatures[i] - 32);
	}



	for(int i = 0; i < num; i++){
		if(choice == 1) 
        	printf("\n%.2f°C = %.2f°F", temperatures[i], convertedTemperatures[i]);
        else 
        	printf("\n%.2f°F = %.2f°C", temperatures[i], convertedTemperatures[i]);
    }

	return 0;	
}