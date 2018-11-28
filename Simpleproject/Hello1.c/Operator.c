#include <stdio.h>

int sub4(void) 
{
	int num1 = 10;
	int num2 = 12;
	int num3 = num1--;
	int result1, result2, result3;

	printf("%d\n", num3);
	printf("%d\n", num2);
	
	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 > 12);

	printf("%d\n", result1);
	printf("%d\n", result2);

	system("pause");
	//sub3();
}