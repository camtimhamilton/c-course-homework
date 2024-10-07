#include <stdio.h>

#define LEN 5

int main() {
	int a[LEN] = {1, 2, 3, 4, 5};

	int *pa = &a[0];

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(pa + i));
	}
	printf("-----\n");
	for (; pa < &a[0] + LEN; pa++) {
		printf("%d\n", *pa);
	}
}