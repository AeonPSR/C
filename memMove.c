#include <stdio.h>
#include <stdlib.h>

int main() {
	int *array = (int *)malloc(5 * sizeof(int));
	if (!array)
		return ;

	array = realloc(array, 10 * sizeof(int));

	free(array);
}