#include <stdio.h>

int main() {
	int x[5] = {1, 2, 3, 4, 5};
	int *c = x;

	printf("{");
	for (int i = 0; i < 5; i++) {
		printf("%d,", *(c + i));
	}
	printf("}\n");

}