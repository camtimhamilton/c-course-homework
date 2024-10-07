#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randint(int min, int max) {
	return min + (rand() % (max - min + 1));
}


void fill(int *a, const size_t n, const size_t m) {
	for (size_t i = 0; i < n * m; i++) {
		*(a + i) = randint(0, 100);
	}
}


void mapr(int *a, const size_t n, const size_t m) {
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			printf("%d\t", *(a + k * m + i));
		}
		printf("\n");
	}
}


void change(int *a, const size_t n, const size_t m, const size_t x, const size_t y, const int c) {
	if ((x >= 0 && x <= n - 1) && (y >= 0 && y <= m - 1)) {
		*(a + x * m + y) = c;
		printf("success\n");
		mapr(a, n, m);
	}
	else printf("wrong index\n");
}


int main() {
	srand(time(NULL));

	int n, m;
	scanf("%d%d", &n, &m);

	int *a = calloc(n * m, sizeof(int));

	printf("%d x %d matrix\n", n, m);
	fill(a, n, m);
	mapr(a, n, m);

	int x, y, c;

	while (1 == 1) {
		scanf("%d%d%d", &x, &y, &c);
		if (x == -1 && y == -1) {
			exit(0);
		}
		change(a, n, m, x, y, c);
	}

	free(a);
}