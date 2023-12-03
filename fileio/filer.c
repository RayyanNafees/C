#include <stdio.h>

int main(){
	FILE *fptr = fopen("./chutad.txt", "w");
	fprintf(fptr, "\nDesi Bhabi ki mast file");
	fclose(fptr);
	return 0;
}
