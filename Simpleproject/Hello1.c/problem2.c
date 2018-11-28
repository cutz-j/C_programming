#include <stdio.h>

int problem2(void)
{
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d x %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	system("pause");
	return 0;
}

int problem3(void)
{
	int num1;
	scanf_s("%d", &num1);
	printf("%d", num1*num1);
	system("pause");
	return 0;
}

int problem4(void)
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("¸ò: %d\n³ª¸ÓÁö: %d\n", num1 / num2, num1 % num2);
	system("pause");
	return 0;
}

int problem5(void)
{
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("res: %d", (num1 - num2) * (num2 + num3) * (num3 % num1));
	system("pause");
	return 0;
}


















