#include <stdio.h>

int sub3(void)
{    // 선언은 무조건 처음부터
	int num1, num2; // 변수 선언
	int num3 = 30, num4 = 40;
	num1 = 10; // 변수 초기화
	num2 = 20;
	printf("num1: %d, num2: %d \n", num1, num2);
	//printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	system("pause");
	return 0;

}