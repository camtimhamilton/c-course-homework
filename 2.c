#include <stdio.h>

int main() {
	int a = 5;
	int *pa = &a;

	printf("%d\n", a);
	*pa = 6;
	printf("%d\n", a);
}