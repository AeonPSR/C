#include <stdio.h>

void op(int *a) {
    *a *= 5;
	return ;
}

int main() {
	int a = 5;

	printf("a:%i\n\n", a);

	op(&a);

	printf("a:%i", a);
}