#include<stdio.h>

int main(void)
{
	int a=1;//�Էµ� ��
	int b;//������ ��
	int i;
	int j;
	printf("����� ����� ������ �Է�(��ü�� ������ 10�� �Է�) :");
	scanf_s("%d", &a);

	switch (a)
	{
	case 10:

		for (i = 2; i <= 9; i++)
		{
			printf("%d��:\n", i);// 1�ܺ��� 9�ܱ��� �ݺ�

			for (j = 1; j <= 9; j++)
			{
				printf("%d x %d = %d\n", i, j, i * j);// 1���� 9���� ���ϱ�
			}
		}
		break;

	default:

		for (b = 1; b <= 9; b++)//b��������Ű�� 1~9�����ݺ�
		{
			printf("%d*%d=%d\n", a, b, (a * b));
			
		}
	}
	return 0;
	}