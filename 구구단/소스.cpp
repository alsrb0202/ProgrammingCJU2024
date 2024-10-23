#include<stdio.h>

int main(void)
{
	int a=1;//입력될 수
	int b;//증가할 수
	int i;
	int j;
	printf("몇단을 출력할 것인지 입력(전체를 보려면 10을 입력) :");
	scanf_s("%d", &a);

	switch (a)
	{
	case 10:

		for (i = 2; i <= 9; i++)
		{
			printf("%d단:\n", i);// 1단부터 9단까지 반복

			for (j = 1; j <= 9; j++)
			{
				printf("%d x %d = %d\n", i, j, i * j);// 1부터 9까지 곱하기
			}
		}
		break;

	default:

		for (b = 1; b <= 9; b++)//b를증감시키며 1~9까지반복
		{
			printf("%d*%d=%d\n", a, b, (a * b));
			
		}
	}
	return 0;
	}