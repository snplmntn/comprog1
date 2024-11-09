#include <stdio.h>

int main() {
    int num, table;

    do {
        printf("Enter a number to generate its multiplication table: ");
        scanf("%d", &num);

        if(num <= 0)
        printf("\nPlease enter positive integers only.\n\n");
    } while(num <= 0);

	do {
        printf("Up to what number should the table go? ");
    	scanf("%d", &table);

        if(table <= 0)
        printf("\nPlease enter positive integers only.\n\n");
    } while(table <= 0);
    
    
    printf("\n");

    for(int i = 1; i <= table; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}