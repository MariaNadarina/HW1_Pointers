#include <stdio.h>

int main(void) {
	int num = 10;
	int *ptr = &num;
	printf("Initial value of num: %d\n", num);
	printf("Address using &num: %p\n", (void *)&num);
	printf("Address stored in ptr: %p\n", (void *)ptr);
	*ptr = 25;
	printf("New value of num: %d\n", num);
	printf("Value using pointer: %d\n", *ptr);
	return 0;
	}
