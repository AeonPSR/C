#include <stdio.h>

int main() {
	int x[4] = {1, 2, 3, 4};
	int *alpha = x;
	int *omega = x + 3;

    printf("Original array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

	while (alpha < omega) {
        int temp = *alpha;
        *alpha = *omega;
        *omega = temp;
        alpha++;
        omega--;
    }

	printf("Reversed array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

}