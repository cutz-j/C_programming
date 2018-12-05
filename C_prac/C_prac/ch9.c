#include <stdio.h>

int AddToTotal(int num)
{
	static int total;
	total += num;
	return total;
}

int sub3(void)
{
	printf("%d", factorial(15));
	return 0;
}



int q9_9_1(void)
{
	int num1, num2, num3;
	int getMax(num1, num2, num3);
	int getMin(num1, num2, num3);
	scanf_s("%d %d %d", &num1, &num2, &num3);
	getMax(num1, num2, num3);
	getMin(num1, num2, num3);
	return 0;
}

int getMax(int num1, int num2, int num3)
{
	if ((num1 > num2) & (num1 > num3))
	{
		printf("%d\n", num1);
		return num1;
	}
	else if ((num2 > num1) & (num2 > num1))
	{
		printf("%d\n", num2);
		return num2;
	}
	else
	{
		printf("%d\n", num3);
		return num3;
	}
}

int getMin(int num1, int num2, int num3)
{
	if ((num1 < num2) & (num1 < num3))
	{
		printf("%d\n", num1);
		return num1;
	}
	else if ((num2 < num1) & (num2 < num3))
	{
		printf("%d\n", num2);
		return num2;
	}
	else
	{
		printf("%d\n", num3);
		return num3;
	}
}

int q9_1_2(void)
{
	double num;
	double CelToFah(num);
	double FahToCel(num);
	scanf_s("%lf", &num);
	printf("%f\n", CelToFah(num));
	printf("%f", FahToCel(num));
}

double CelToFah(double c)
{
	return 1.8 * c + 32;
}

double FahToCel(double d)
{
	return (d - 32) / 1.8;
}

int fib(int num)
{
	if (num == 0 || num == 1)
		return num;
	else
	{
		int fib_step = fib(num - 1) + fib(num - 2);
		printf("%d\n", fib_step);
		return fib_step;
	}
}

int factorial(int num)
{
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}