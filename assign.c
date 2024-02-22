#include <stdio.h>

int main() {
	float *p = NULL;
	float f = 7.8;

	p = &f;
	printf("Adresse: %p\n", (void *)&p);
	printf("Float: %f\n", *p);
}