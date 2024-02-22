#include <stdio.h>

int main() {
	int x[4] = {1, 2, 3};
	int *c = x;

    printf("Original array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

	for  (int i; i < 3; i++) {
		*c += 5;
		c++; 
    }

	printf("Edited array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

}