#include <stdio.h>

int main(void) {
    int a = 0;//����ϴ¼� 1
    int b = 0;//����ϴ¼� 2
    char giho;// ��ȣ
    int dap = 0;// ��

    printf("����� ������ �Է� (��: 1 + 1) : ");
    scanf_s("%d %c %d", &a, &giho, sizeof(giho), &b);

    switch (giho)
    {
    case'+':
        dap = a + b;
        printf("�� : %d\n", dap);
        break;
    case'-':
        dap = a - b;
        printf("�� : %d\n", dap);
        break;
    case'*':
        dap = a * b;
        printf("�� : %d\n", dap);
        break;
    case'/':
        dap = a / b;
        printf("�� : %d\n", dap);
        break;

    }

    return 0;
}