#include <stdio.h>

int sub(void)
{
	//q7_2_2();
	//q7_3_2();
	//q7_3_3();
	//q7_4_1();
	//q7_4_2();
	gugudan();
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

int q7_3_2(void)
{
	int num = 0, total = 0;
	do
	{
		total += num;
		num += 2;
	} while (num <= 100);
	printf("%d", total);
	return 0;
}

int q7_3_3(void)
{
	int dan = 1, num = 2;
	do
	{
		do
		{
			printf("%d x %d = %d\n", num, dan, num * dan);
			dan++;
		} while (dan <= 9);
		num++;
		dan = 1;
	} while (num <= 9);
	return 0;
}

int q7_4_1(void)
{
	int num1, num2, total = 0;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	
	for (num1; num1 <= num2; num1++)
	{
		total += num1;
	}
	printf("%d", total);
	return 0;
}

int q7_4_2(void)
{
	int num, total = 1;
	scanf_s("%d", &num);

	for (num; num > 0; num--)
	{
		total *= num;
	}
	printf("%d", total);
	return 0;
}

int gugudan(void)
{
	int dan, num;
	for (num = 2; num < 10; num++)
	{
		for (dan = 1; dan < 10; dan++)
			printf("%d x %d = %d\n", num, dan, num * dan);
	}
	return 0;
}