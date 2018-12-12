#include <stdio.h>

int sub13_c(void)
{
	//q13_1_1();
	//q13_1_2();
	//q13_1_3();
	q13_1_4();
	return 0;
}

int ch13_1(void)
{
	int arr[3] = { 0, 1, 2 };
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };
	printf("%p \n", arr);
	printf("%d \n", &arr[3]);
	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", *arr1, *arr2);
	return 0;
}

int q13_1_1(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d \t", arr[i]);
		*ptr += 2;
		ptr++;
	};
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("%d \t", arr[i]);
	return 0;
}

int q13_1_2()
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d \n", arr[i]);
	}
}

int q13_1_3()
{
	int arr[5] = { 1,2,3,4,5 };
	int temp = 0;
	int *ptr = &arr[4];
	for (int i = 0; i < 5; i++)
	{
		temp += *(ptr--);
		printf("%d \t", temp);
	}
	return 0;
}

int q13_1_4(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int temp;

	for (int i = 0; i < 3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
	for (int i = 0; i < 6; i++)
		printf("%d \t", arr[i]);

	return 0;
}

