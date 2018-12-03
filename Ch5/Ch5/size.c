#include <stdio.h>

int sub(void)
{
	char ch = 9;
	int inum = 1052;
	double pi = 3.141592;
	double rad, area;
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(inum));
	printf("%d\n", sizeof(pi));

	// ¿øÀÇ ³ĞÀÌ
	scanf_s("%lf", &rad);
	printf("%lf", rad);
	area = rad * rad * pi;
	printf("¿øÀÇ ³ĞÀÌ´Â: %lf \n", area);


	return 0;
}