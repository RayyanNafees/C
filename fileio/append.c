#include <stdio.h>

int main(){
	FILE *fileptr = fopen("./chutad.txt", "a");
	fprintf(fileptr, "\nKhaike Chutad Banaras wala");
	fclose(fileptr);
	return 0;
}
