#include <stdio.h>

int main(void)
{
	//q14_1_1();
	//q14_1_2();
	//q14_2_1();
	q14_2_2();
	return 0;
}

int q14_1_1()
{
	int num = 3;
	int *ptr = &num;
	printf("%d", squarebyvalue(num));
	printf("\n%d", squarebyreference(ptr));
}

int squarebyvalue(int num)
{
	return num * num;
}

int squarebyreference(int *num)
{
	return *num * *num;
}

int q14_1_2(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	swap3(&num1, &num2, &num3);

	printf("%d ", num1);
	printf("%d ", num2);
	printf("%d", num3);
}

int swap3(int *num1, int *num2, int *num3)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}

int q14_2_1(void)
{
	int *arr[5] = { 0, 1, 2, 3, 4 };
	showAllData(&arr, 5);
}

int showAllData(const int * arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
}

int showData(const int * ptr)
{
	int * rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}

int q14_2_2(void)
{
	int num = 10;
	int * ptr = &num;
	showData(ptr);
	return 0;

}