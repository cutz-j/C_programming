#include <stdio.h>

int sub_16_c(void)
{
	//q16_1_1();
	//q16_1_2();
	q16_1_3();
	return 0;
}

int q16_1_1(void)
{
	int arr[3][9];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
		}
	}
	print_array(&arr, 3, 9);
	return 0;
}

int print_array(int *arr[], int i, int j)
{
	for (int k = 0; k < i*j; k++)
	{
		if (k % j == 0)
		{
			printf("\n");
		}
		printf("%d  ", arr[k]);
	}
	return 0;
}

int q16_1_2(void)
{
	int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arr2[4][2];
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr2[i][j] = arr[j][i];
		}
	}
	print_array(&arr2, 4, 2);
	return 0;
}

int q16_1_3(void)
{
	int score[5][5];
	int total_row = 0;
	int total_col = 0;
	int total_sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("성적 입력: ");
			scanf_s("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			total_row += score[i][j];
			total_col += score[j][i];
		}
		score[i][4] = total_row;
		total_row = 0;
		score[4][i] = total_col;
		total_sum += total_col;
		total_col = 0;
		score[4][4] = total_sum;
	}
	print_array(&score, 5, 5);
	return 0;
}