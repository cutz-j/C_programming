#include <stdio.h>

int main(void)
{
	q17_1_1();

	return 0;
}

int q17_1_1(void)
{
	int *maxPtr;
	int *minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("insert int: ");
		scanf_s("%d", &arr[i]);
	}
	maxAndMin(&arr, &maxPtr, &minPtr);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n%d %d", maxPtr, minPtr);
	return 0;
}

int maxAndMin(int *arr, int **maxPtr, int **minPtr)
{
	int *max = &arr[0];
	int *min = &arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	//printf("%d", max);
	*maxPtr = max;
	*minPtr = min;
	return 0;
}


