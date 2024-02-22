#include <stdio.h>

int main() {
	char string[] = "String";
	int i = 10;
	float f = 5.2;

	printf("String: %p\n", (void *)&string);
	printf("Int: %p\n", (void *)&i);
	printf("Float: %p\n", (void *)&f);
}