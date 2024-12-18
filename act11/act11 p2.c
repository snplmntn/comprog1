#include <stdio.h>
#include <string.h>

int main() {
	int numOfWords;
	
	printf("Enter the number of words: ");
	scanf("%d", &numOfWords);
    getchar();
    
    char words[numOfWords][100];
	int largest = 0;
	
	printf("Enter the text: ");
	for(int i = 0; i < numOfWords; i++) {
		scanf("%s", words[i]);
		if(strlen(words[i]) > largest) {
			largest = strlen(words[i]);
		}
	}
	
	printf("\nThe length of the largest word is: %d", largest);
	
	return 0;
}