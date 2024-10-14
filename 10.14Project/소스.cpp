#include <stdio.h>

int main(void)

{
	int a;
	int b;
	char giho;
	int dap;

	printf("계산할 문제를 입력 :");
	scanf_s("%d %c %d", &a, &giho, &b);
	
	if (giho == a + b)
	{
		dap = a + b;
	}
	if (giho == a - b)
	{
		dap = a - b;
	}
	if (giho == a * b)
	{
		dap = a * b;
	}
	if (giho == a / b)
	{
		dap = a / b;
	}
	printf("=%d\n", dap);

	return 0;
}