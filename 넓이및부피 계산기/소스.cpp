#include <stdio.h>

int main(void)
{
	
	int length;
	int heigt;
	double radius=0.0;

	printf("�ﰢ�� �Ǵ� �簢���� ���̿� ���̿� �Է� ���̳� ���� �������� �Է�:");
	scanf_s("%d%d%lf",&length,&heigt,&radius);
	printf("�簢���� ���� : %d\n",length * heigt);
	printf("�ﰢ���� ���� : %d\n",length * heigt/ 2);
	printf("���ǳ��� : %.2lf\n", radius * radius * 3.14);
	printf("���� �ѳ��� : %.2lf\n", radius * radius * 3.14 * 4);
	printf("���� ü�� : %.2lf\n", radius * radius * radius * 3.14 * 4 / 3);


	return 0;
}