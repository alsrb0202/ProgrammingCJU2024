#include <stdio.h>

int main(void)

{
	int a;
	int b;
	char giho;
	int dap;

	printf("����� ������ �Է� :");
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