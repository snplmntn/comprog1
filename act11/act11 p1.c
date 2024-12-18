#include <stdio.h>
#include <string.h>

int main() {
	char name[50];
	
	printf("Enter the name: \n");
	scanf("%s", name);
	
	printf("\n%d", strlen(name) % 2 == 0 ? 1 : 2);
	
	return 0;
}