#include<stdio.h>

int main(void)
{
	int a=1;//�Էµ� ��
	int b;//������ ��

	printf("������� �Է� :");
	scanf_s("%d", &a);

	for (b = 1; b <= 9; b++)//b��������Ű�� 1~9�����ݺ�
	{
		printf("%d*%d=%d\n", a, b, (a * b));
	}
	return 0;
}