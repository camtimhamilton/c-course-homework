#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randint(int min, int max) {
	return min + (rand() % (max - min + 1));
} 


void fill(int *p, int size) {
	for (int i = 0; i < size; i++) {
		*(p + i) = randint(0, 100);
	}
}


int main() {
	srand(time(NULL));
	int n;
	scanf("%d", &n);
	int *a = calloc(n, sizeof(int));

	fill(a, n);

	printf("array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d\n", *(a + i));
	}
	free(a);
}