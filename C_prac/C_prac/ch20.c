#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//q20_1_1();
	//q20_1_2();
	//q20_1_3();
	//q20_1_4();
	//q20_1_5();
	q20_1_6();
	return 0;
}

int q20_1_1(void)
{
	int arr[4][4];
	int arr2[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			arr[i][j] = (i * 4) + (j + 1);
	rotate(arr, arr2, 4, 4);
	rotate(arr2, arr, 4, 4);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}

int rotate(int arr[][4], int arr2[][4], int row, int col) {
	int tmp;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr2[i][j] = arr[3 - j][i];
		}
	}
	return 0;
}

int q20_1_2(void){
	int num;
	int j = 0;
	scanf_s("%d", &num);
	showSnail(num);
}

int showSnail(int n){
	int **snail;
	snail = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		snail[i] = (int*)malloc(sizeof(int) * n);
	}
	int len = n; // ����,������ ����
	int num = 1; // 1���� n*n���� ���ڰ� ä���� ����
	int i, j;
	int x = -1, y = 0;
	int dir = 1; // �������
	while (1) {
		for (i = 0; i < len; i++) 
		{ // ���� ä���
			x += dir;
			snail[y][x] = num++;
		}
		if (--len < 0) // �ݺ��� Ż���� ���� �迭 ���� ���� 
			break;
		for (i = 0; i < len; i++) { // ���� ä���
			y += dir;
			snail[y][x] = num++;
		}
		dir *= -1; // ������� 180�� ȸ��
	}
	for (i = 0; i < n; i++){ // ���
		for (j = 0; j < n; j++)
			printf("%d ", snail[i][j]);
			printf("%d ", snail[i][j]);
		printf("\n");
	}
	free(snail);
}

int q20_1_3(void) {
	int r;
	for (int i = 0; i < 5; i++) {
		printf("%d ", rand()%100+1);
	}
	return 0;
}

int q20_1_4(void) {
	int i;
	srand((int)time(NULL));
	for (i = 1; i < 3; i++){
		printf("%d��° dice: %d \n", i, rand() % 6 + 1);
	}
	return 0;
}

int q20_1_5(void) {
	int player, com;
	int win = 0, draw = 0;
	char arr[3][10] = { "����", "����", "��" };
	while (1) {
		printf("\n������ 1, ������ 2, ���� 3: ");
		scanf_s("%d", &player);
		com = rand()%3+1;
		

		if (player == com) {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�", arr[player - 1], arr[com - 1]);
			draw += 1;
		}
		else if ((player == 1 & com == 3) | (player == 2 & com == 1) | (player == 3 & com == 2)) {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �̰���ϴ�", arr[player - 1], arr[com - 1]);
			win += 1;
		}
		else {
			printf("\n����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�", arr[player - 1], arr[com - 1]);
			printf("\n���� %d�� %d��", win, draw);
			break;
		}
	}
	return 0;
}

int q20_1_6(void) {
	int arr[3];
	int test[3];
	int num1, num2, num3;
	int strike = 0, ball = 0;
	int times = 1;
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		arr[i] = rand() % 9 + 1;
	}
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	printf("Game Start\n");
	while (1) {
		printf("%d��° ���� ����: ", times);
		scanf_s("%d %d %d", &num1, &num2, &num3);
		test[0] = num1;
		test[1] = num2;
		test[2] = num3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (arr[i] == test[j]) {
					if (i == j) {
						strike += 1;
						break;
					}
					else {
						ball += 1;
					}
				}
			}
		}
		printf("%d��° ���� ���: %d strike, %d ball\n", times, strike, ball);
		if (strike == 3) {
			printf("Game Over");
			break;
		}
		strike = 0;
		ball = 0;
		times += 1;
	}
	return 0;
}