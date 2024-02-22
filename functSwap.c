#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
    *a = *b;
    *b = t;
return ;
}

int main() {
	int a = 5;
	int b = 7;

	printf("a:%i\nb:%i\n\n", a, b);

	swap(&a, &b);

	printf("a:%i\nb:%i\n", a, b);
}