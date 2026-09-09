#include <stdio.h>

int main(void){
	int num = 100;
	int *ptr=&num;
	int **dptr = &ptr;
	printf("Value using variable: %d\n", num);
	printf("Value using pointer: %d\n", *ptr);
	printf("Value using double pointer: %d\n", **dptr);
	printf("Address of number: %p\n",(void *)&num);
	printf("Value stored in ptr: %p\n", (void*)ptr);
	printf("Address of ptr: %p\n",(void*)&ptr);
	printf("Value stored in double pointer: %p\n",(void*)dptr);
	
	return 0;
}
