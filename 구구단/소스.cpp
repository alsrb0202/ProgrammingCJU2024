#include<stdio.h>

int main(void)
{
	int a=1;//입력될 수
	int b;//증가할 수

	printf("몇단인지 입력 :");
	scanf_s("%d", &a);

	for (b = 1; b <= 9; b++)//b를증감시키며 1~9까지반복
	{
		printf("%d*%d=%d\n", a, b, (a * b));
	}
	return 0;
}