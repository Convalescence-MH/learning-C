#include <stdio.h>

int main(void) {
	int x = 10;
	int *ptr = &x;
	printf("Value of pointer: %d\n", *ptr);
	printf("Address of pointer: %p\n", ptr);

	return 0;
}
