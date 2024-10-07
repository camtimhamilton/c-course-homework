#include "stdio.h"

int main() {
	int a = 5;
	int *pa = &a;
	int **ppa = &pa;

	printf("%d\n", *pa);
	printf("%d\n", **ppa);
}