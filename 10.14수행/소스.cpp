#include<stdio.h>

int main(void)

{
	int a;
	int b;
	int giho;
	int ans;

	printf("계산할 문제를 입력 :");
	scanf_s("%d, %d, %d\n", &a, &b, &giho)
		if (giho == +)
		{
			ans = a + b;
		}
	if (giho == -)
	{
		ans = a - b;
	}
	if (giho == *)
	{
		ans = a * b;
	}
	if (giho == /)
	{
		ans = a / b;
	}
	printf("=%d\n", ans);

	return 0;
}