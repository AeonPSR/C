#include <stdio.h>
#include <stdlib.h>

int main() {
	float *array = (float *)malloc(10 * sizeof(float));
	
	for (int i = 0; i < 10; i++) {
    	array[i] = 2.2;
    }

	for (int i = 0; i < 10; i++) {
		printf("%f ", array[i]);
	}
	printf("\n");

	free(array);
}