#include <stdio.h>

int main() {
	int i = 10;
	int *p = &i;

	printf("%i\n", i);
	*p = 20;
	printf("%i\n", i);
}