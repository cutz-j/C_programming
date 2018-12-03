#include <stdio.h>

int main(void)
{
	q7_2_2();
	return 0;
}

int octhex(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num2);
	printf("%x %#x \n", num1, num2);
	return 0;
}

int q7_1_1(void)
{
	int num;
	int init = 0;
	scanf_s("%d", &num);
	while (init < num)
		printf("Hello world!\n", init++);
	return 0;
}

int q7_1_2(void)
{
	int num = 3, dan, snum;
	scanf_s("%d", &snum);
	dan = snum;
	while (dan != 0)
	{
		printf("%d x %d = %d\n", num, dan, num * dan);
		dan--;
	}
	return 0;
}

int q7_1_7(void)
{
	int d = 1, num = 0;
	while (d != 0)
	{
		scanf_s("%d", &d);
		num += d;
	}
	printf("%d", num);
	return 0;
}

int q7_1_3(void)
{
	int d, num = 0, count_num = 0;
	float total = 0.0;
	scanf_s("%d", &d);
	while (count_num != d) 
	{
		scanf_s("%d", &num);
		total += num;
		count_num++;
	}
	printf("Æò±Õ: %Lf", total / d);
	return 0;
}

int q7_2_1(void)
{
	int num = 0, count_num = 0;
	double total = 0.0;
	while (count_num < 5)
	{
		while (num < 1)
		{
			printf("ÀÔ·Â: ");
			scanf_s("%d", &num);
		}
		total += num;
		num = 0;
		count_num++;
	}
	printf("%Lf", total / 5);
	return 0;
}

int q7_2_2(void)
{
	int i = 0, j = 0;
	while (i < 5)
	{
		while (j < i)
		{
			printf("o");
			j++;
		}
		printf("*\n");
		i++;
		j = 0;
	}
	return 0;
}