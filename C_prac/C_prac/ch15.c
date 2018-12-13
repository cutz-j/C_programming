#include <stdio.h>
#include <string.h>

int main(void)
{
	////q15_1();
	//q15_2();
	//q15_3();
	//q15_4();
	q15_5();
	return 0;
}

int q15_1(void)
{
	int num = 0;
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	/*for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}*/
	odd_search(&arr, 10);
	even_search(&arr, 10);
	return 0;
}

int odd_search(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}

int even_search(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d", arr[i]);
	}
	return 0;
}

int q15_2(void)
{
	int num;
	int temp = 10;
	int i;
	int arr[50];
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);
	for (i = 0; num >= 1; i++)
	{
		// for 문 내에서 2씩 나눠가면서, 이진법 수 구하기
		temp = num / 2;
		arr[i] = num % 2;
		num = temp;
	}
	for (i = i-1; i >= 0; i--)
	{
		// i에서 거꾸로 출력
		printf("%d", arr[i]);
	}

	return 0;
}

int q15_3(void)
{
	int num[10];
	int arr[10];
	int check = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i - check]);
		if (num[i - check] % 2 == 0)
		{
			arr[9 - check] = num[i - check];
			check += 1;
		}
		else arr[i - check] = num[i - check];
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}

int q15_4(void)
{
	char str[20];
	int len = 0;
	int palindrome = 0;
	scanf_s("%s", str, sizeof(str));
	//while (str[len] != 0)
	//{
	//	len++;
	//  함수 이용
	//}
	len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
			palindrome = 1;
	}
	if (palindrome == 0)
		printf("회문");
	else printf("회문 not");
	return 0;
}

int q15_5(void)
{
	int arr[5] = { 4,3,5,1,2 };
	int arr2[6] = { 10, 123, 1, 5, 244 };
	bubble_sort(&arr);
	bubble_sort(&arr2);
	return 0;
}

int bubble_sort(int *arr)
{
	int len = sizeof(*arr);
	int temp;
	for (int i = 0; i <= len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i <= len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}