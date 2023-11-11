#include <stdio.h>

void fortune_cookie(char msg[]){
	printf("The msg: %s\n", msg);
}

int main(){
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
	printf("THe memory address of quote: %p\n", quote);
	printf("Memory address of quote[0]: %p\n", &quote[0]);
	printf("Are both equal? - %i", quote == &quote[0]);
}
