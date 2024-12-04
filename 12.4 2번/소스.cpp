#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

// �迭�� ������ ����ϴ� �Լ�
void CalcInverseArray(double* arr, double* inverseArr, int size) 
{
    // �迭�� �������� ����
    for (int i = 0; i < size; i++) 
    {
        inverseArr[i] = arr[size - 1 - i];
    }
}

// �迭�� ����ϴ� �Լ�
void PrintArray(const double* arr, int size, const char* msg) 
{
    printf("%s: ", msg);
    for (int i = 0; i < size; i++) 
    {
        printf("%.2f ", arr[i]); //�Ҽ��� ��°�ڸ������� ���
    }
    printf("\n");
}

int main(void) 
{
    const int SIZE = 10; //�迭�� ũ��
    double arr[SIZE];    //���� �迭
    double inverseArr[SIZE]; //���� �迭
    int choice; //���� �Ǽ� ����

    //���� �Ǵ� �Ǽ��� ����
    printf("�������� ������ ���� ����-(1: ����, 2: �Ǽ�): ");
    scanf_s("%d", &choice);

    // ���� �õ� �ʱ�ȭ
    srand((unsigned int)time(NULL));

    //���ÿ� ���� ���� �Ǵ� �Ǽ� �迭 ����
    if (choice == 1) 
    {
        //������ �迭 ���� (-100 ~ +100)
        for (int i = 0; i < SIZE; i++) 
        {
            arr[i] = (double)(rand() % 201 - 100);
        }
    }
    else if (choice == 2) {
        //�Ǽ��� �迭 ���� (-100.0 ~ +100.0)
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = (double)rand() / RAND_MAX * 200.0 - 100.0;
        }
    }
    else {
        printf("�߸��� ����.\n");
        return 1; //����ó��
    }

    //������ �迭 ���
    PrintArray(arr, SIZE, "������ �迭");

    //���� �迭 ���
    CalcInverseArray(arr, inverseArr, SIZE);

    //���� �迭 ���
    PrintArray(inverseArr, SIZE, "���� �迭");

    return 0;
}