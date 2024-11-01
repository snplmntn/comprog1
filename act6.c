#include <stdio.h>

int main() {
    int meal_choice, mem_status;

    float burger = 150.00, chicken = 200.00, pasta = 250.00; 

    printf("Choose your meal (1 - Burger, 2 - Chicken, 3 - Pasta): ");
    scanf("%d", &meal_choice);

    printf("Enter your membership status (1 - Regular, 2 - Premium): ");
    scanf("%d", &mem_status);

	printf("\n");
    switch (meal_choice) {
    case 1:
        if(mem_status == 1) {
            printf("Your final meal cost is: %.2f", burger);
        } else if(mem_status == 2) {
            printf("Your final meal cost is: %.2f", burger - (burger * .10));
        } else {
            printf("Invalid membership status");
        }
        break;
    
    case 2:
        if(mem_status == 1) {
            printf("Your final meal cost is: %.2f", chicken);
        } else if(mem_status == 2) {
            printf("Your final meal cost is: %.2f", chicken - (chicken * .10));
        } else {
            printf("Invalid membership status");
        }
        break;

    case 3:
        if(mem_status == 1) {
            printf("Your final meal cost is: %.2f", pasta);
        } else if(mem_status == 2) {
            printf("Your final meal cost is: %.2f", pasta - (pasta * .10));
        } else {
            printf("Invalid membership status");
        }
        break;

    default:
        printf("Invalid meal choice");
        break;
    }

    return 0;
}