#include <stdio.h>

int subch12(void)
{
	//int num = 7;

	/*int num = 10;
	int *pnum = &num;
	*pnum = 20;
	printf("%d\n", *pnum);

	num = 7;
	printf("%d", *pnum);*/
	//q12_1_1();
	//q12_1_2();
}

int q12_1_1(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}

int q12_1_2(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int temp;
	(*ptr1) += 10;
	(*ptr2) -= 10;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("\n%d %d", *ptr1, *ptr2);
	return 0;
}