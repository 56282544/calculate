#include <stdio.h>

int main(void)
{
	int x, y;
	double z;
	scanf("%d %d", &x, &y);
	z = x % y;
	printf("%g\n", z);
	getchar();
	getchar();

	return 0;
}