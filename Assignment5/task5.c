#include <stdio.h>

int main(void){
	char str[] ="Hello";
	char *ptr = str;
	int count=0;
	while(*ptr!='\0'){
		printf("%c",*ptr);
		count++;
		ptr++;}
	printf("\nNumber of charecters: %d\n",count);
	return 0;
}
