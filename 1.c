#include <stdio.h>


int main() {
	int a = 5;
	float b = 1.2;

	int *pa = &a;
	float *pb = &b;

	{
		printf("%d\n", a);
		printf("%x\n", pa);

		printf("%f\n", b);
		printf("%x\n", pb);
	}
}