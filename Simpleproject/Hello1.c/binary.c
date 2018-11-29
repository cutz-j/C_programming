#include <stdio.h>

int p85(void)
{
	int num1 = 10;
	int num2 = 0xA;
	int num3 = 012;
	int num4 = 0xA7, num5 = 0x43, num6 = 032, num7 = 024;
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("0.1을 100번 더한 결과: %f \n", num);

	//printf("%d \n %d \n %d \n %d \n %d", num2, num4, num5, num6, num7);
	return 0;
}

int p04(void)
{
	int num;
	scanf_s("%d", &num);
	int num2 = ~num;
	num2 = num2 + 1;
	
	printf("%d", num2);

	return 0;
}

int q2(void)
{
	int num = 3;
	num = num << 3; // 8의 곱
	num = num >> 2; // 4 나누기
	printf("%d \n", num);
	return 0;
}