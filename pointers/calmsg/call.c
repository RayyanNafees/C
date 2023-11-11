#include <stdio.h>

void skip_chars(char *msg){
	printf(msg+6);
}

int main(){
	char* msg = "Don't call me";
	skip_chars(msg);
	return 0;
}
