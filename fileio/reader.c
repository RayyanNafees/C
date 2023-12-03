#include <stdio.h>

int main(int _, char* argv[]){
	FILE *fptr = fopen(argv[1], "r");
	if (fptr==NULL){
		printf("File not found: %s", argv[1]);
		fclose(fptr);
		return 0;
	}
	char chutadText[100];
	fgets(chutadText, 100, fptr);

	printf("%s", chutadText);
	
	
	fclose(fptr);
	return 0;
}
