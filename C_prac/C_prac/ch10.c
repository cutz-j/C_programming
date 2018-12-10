#include <stdio.h>

int sub10(void)
{
	//q1();
	//q2();
	//q3();
	//q4();
	//q5();
	//q6();
	//printf("%d", pow(10));
	//q7();
	printf("%d", pow_recursive(8));

}

int q1(void)
{
	int num;
	scanf_s("%d", &num);
	printf("%x", num);
}

int q2(void)
{
	int num1, num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	if (num1 > num2)
	{
		for (num1; num1 >= num2; num1--)
		{
			for (int i = 1; i < 10; i++)
				printf("%d x %d = %d\n", num1, i, num1 * i);
		}
	}
	else
	{
		for (num1; num1 <= num2; num1++)
		{
			for (int i = 1; i < 10; i++)
				printf("%d x %d = %d\n", num1, i, num1 * i);
		}
	}
}

int q3(void)
{
	int num1, num2, answer;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	
	// 두 정수 중 작은 정수가 제한 범위 //
	if (num1 > num2)
		for (int i = 1; i <= num2; i++)
		{
			if ((num1%i == 0) & (num2%i == 0))
			{
				answer = i;
			}
		}
	else
		for (int i = 1; i <= num1; i++)
		{
			if ((num1%i == 0) & (num2%i == 0))
			{
				answer = i;
			}
		}
	printf("최대공약수: %d", answer);
}

int q4(void)
{
	int money = 3500;
	for (int cream=1; (cream * 500) <= 3500; cream++)
	{
		for (int snack=1; (snack * 700) <= 3500; snack++)
		{
			for (int coke=1; (coke * 400) <= 3500; coke++)
			{
				//printf("%d\n", (cream * 500) + (snack * 700) + (coke * 400));
				if ((cream * 500) + (snack * 700) + (coke * 400) == 3500)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, snack, coke);
				}
			}
		}
	}
}

int q5(void)
{
	int count_num = 1, prime = 0;
	for (int i = 2; count_num <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				prime += 1;
		}
		if (prime == 2)
		{
			printf("%d\n", i);
			count_num += 1;
		}
		prime = 0;
	}
}

int q6(void)
{
	int sec, min = 0, hour = 0;
	scanf_s("%d", &sec);
	hour = sec / 3600;
	sec -= hour * 3600;
	min = sec / 60;
	sec -= min * 60;
	printf("h: %d, m: %d, s: %d", hour, min, sec);
}

int q7(void)
{
	int n;
	int pow(n);
	scanf_s("%d", &n);
	for (int i = 1; ; i++)
	{
		if (pow(i) > n)
		{
			printf("공식을 만족하는 k의 최댓값은: %d", i - 1);
			break;
		}
	}
}

int pow(int i)
{
	int sq = 1;
	for (int j = 1; j <= i; j++)
		sq = sq * 2;
	return sq;
}

int pow_recursive(int i)
{
	if (i == 1)
		return 2;
	else
		return 2 * pow_recursive(i - 1);
}