#include <stdio.h>

int problem1(void)
{
	int num;
	int num1;
	scanf_s("%d %d", &num, &num1);
	
	printf("subtract %d\n", num - num1);
	printf("multiply %d\n", num * num1);
	system("pause");
	return 0;
}