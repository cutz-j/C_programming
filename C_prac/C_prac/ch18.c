#include <stdio.h>

int sub_18_c(void)
{
	int num = 3;
	int *ptr = &num;
	int **dptr = &ptr;
	int arr[2][3] = { 1,2,3,4,5,6 };
	int *arr1 = arr;
	int **arr3[5];
	printf("%d\n", arr3);
	printf("%d\n", ptr);
	printf("%d\n", &ptr);
	printf("%d\n", *ptr);
	printf("%d\n", *(ptr+4));
	printf("%d\n", dptr);
	printf("%d\n", *dptr);
	printf("%d\n", **dptr);
	printf("%d\n%d\n", arr1, arr);
	printf("%d\n", arr[1][1]);
	printf("%d\n", (*arr)[1]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}