#include<stdio.h>

int main(void)

{
	int a;
	int b;
	int giho;
	int ans;

	printf("����� ������ �Է� :");
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