#include <stdio.h>

int main(void)
{
	//q5_1();
	//q5_2();
	//q5_4();
	type();
	return 0;
}

int q5_1(void)
{
	int lx, ly;
	int rx, ry;
	scanf_s("%d %d", &lx, &ly);
	scanf_s("%d %d", &rx, &ry);
	printf("ÁÂÇ¥ %d %d \n", lx, ly);
	printf("ÁÂÇ¥ %d %d \n", rx, ry);
	printf("³ÐÀÌ: %d \n", (rx - lx)*(ry - ly));
	return 0;
}

int q5_2(void)
{
	double num1;
	double num2;
	scanf_s("%lf %lf", &num1, &num2);
	printf("sum %lf \nsub %lf \nmul %lf\ndiv %lf\n", (num1 + num2), (num1 - num2), (num1 * num2), (num1 / num2));
	return 0;
}

int q5_4(void)
{
	int num1;
	char numtochar1;
	scanf_s("%d %c", &num1, &numtochar1);
	printf("%c\n", num1);
	printf("%d\n", numtochar1);

	return 0;
}

int type(void)
{
	int num1 = 3, num2 = 4;
	double div1, div2;
	div1 = num1 / num2;
	printf("%lf", div1);
	div2 = (double)num1 / num2;
	printf("%lf", div2);
	return 0;
}