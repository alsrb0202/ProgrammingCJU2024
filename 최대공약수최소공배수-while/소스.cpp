#include <stdio.h>

int main(void) 
{
    int num1; 
    int num2; 
    int yaksu; 
    int baesu;

    printf("�ִ������� �ִ������� �˾ƺ� �� 2���� �Է�: ");
    scanf_s("%d %d", &num1, &num2);

    // �ִ����� ��� (while �ݺ��� ���)
    yaksu = (num1 < num2) ? num1 : num2; // ���� ���� �ʱ�ȭ
    while (yaksu > 0)
    {
        if (num1 % yaksu == 0 && num2 % yaksu == 0)
        {
            break; // �ִ����� ã��
        }
        yaksu--; // ����� 1�� ����
    }

    // �ּҰ���� ���
    baesu = (num1 * num2) / yaksu;

    printf("�ִ�����: %d\n", yaksu);
    printf("�ּҰ����: %d\n", baesu);

    return 0;
}