#include <stdio.h>

int sub12(void)
{
	//p8_1_1();
	//p8_1_2();
	//p8_1_3();
	//q8_2_1();
	q8_2_2();
	return 0;
}

int p8_1_1(void)
{
	int i, num;
	for (i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
			printf("%d\n", i);
		else if (i % 9 == 0)
			printf("%d\n", i);
	}
	return 0;
}

int p8_1_2(void)
{
	int num1, num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	//if (num1 > num2)
	//	printf("%d", num1 - num2);
	//else
	//	printf("%d", num2 - num1);
	num1 > num2 ? printf("%d", num1 - num2) : printf("%d", num2 - num1);

	return 0;
}

int p8_1_3(void)
{
	int num1, num2, num3, mean;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	mean = (num1 + num2 + num3) / 3;
	if (mean > 90)
		printf("A");
	else if (mean > 80)
		printf("B");
	else if (mean > 70)
		printf("C");
	else
		printf("D");
	return 0;
}

int q8_2_1(void)
{
	int num , dan = 2;
	for (dan; dan < 10; dan += 2)
	{
		for (num = 1; num <= dan; num++)
			printf("%d x %d = %d\n", dan, num, num * dan);
	}
	return 0;
}

int q8_2_2(void)
{
	int num, a, z;
	for (a = 1; a <= 9; a++)
	{
		for (z = 1; z <= 9; z++)
		{
			num = ((a * 10) + z) + ((z * 10) + a);
			if (num == 99)
				printf("%d, %d\n", a, z);
		}
	}
	return 0;
}