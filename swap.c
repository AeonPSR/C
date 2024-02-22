#include <stdio.h>

int main() {
	int x = 5;
	int y = 7;
	int *px = &x;
	int *py = &y;

	printf("px: %i\n", *px);
	printf("py: %i\n", *py);
	px = py;
	py = &x;
	printf("px: %i\n", *px);
	printf("py: %i\n", *py);
}