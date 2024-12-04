#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10//�迭 ũ��� 10

//�迭�� ���¸� ����ϴ� �Լ�
void PrintArray(double* array, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%.2f ", array[i]);//�Ҽ��� ��°�ڸ������� ���
    }
    printf("\n");
}

//�迭�� ����
void CalcSortArray(double* array, int size, int ascending) 
{
    //���� ������ ����Ͽ� �迭 ����
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            //��������
            if (ascending && array[j] > array[j + 1]) 
            {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            //��������
            else if (!ascending && array[j] < array[j + 1]) 
            {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(void) 
{
    double array[SIZE];
    int choiceType, choiceSort;

    srand(time(NULL));

    //�Ǽ�, ���� ����
    printf("�������� ������ ���� ����-(1: ����, 2: �Ǽ�): ");
    scanf_s("%d", &choiceType);

    //�迭 ����
    for (int i = 0; i < SIZE; i++) 
    {
        if (choiceType == 1) 
        {
            //���� ���� (0 ~ 100)
            array[i] = rand() % 101;
        }
        else if (choiceType == 2) 
        {
            //�Ǽ� ���� (-100.0 ~ +100.0)
            array[i] = ((double)rand() / RAND_MAX) * 200.0 - 100.0;
        }
        else 
        {
            printf("�߸��� ����.\n");
            return 1;
        }
    }

    //���� ������ �迭 ���
    printf("���� ������ �迭: ");
    PrintArray(array, SIZE);

    //���� ��� ����
    printf("���� ����� �����ϼ��� (1: ��������, 2: ��������): ");
    scanf_s("%d", &choiceSort);

    //���ÿ� ���� ����
    if (choiceSort == 1) 
    {
        CalcSortArray(array, SIZE, 1); //�������� ����
        printf("�������� ���ĵ� �迭: ");
    }
    else if (choiceSort == 2) 
    {
        CalcSortArray(array, SIZE, 0); //�������� ����
        printf("�������� ���ĵ� �迭: ");
    }
    else 
    {
        printf("�߸��� ����.\n");//���� ó��
        return 1;
    }

    // ���ĵ� �迭 ���
    PrintArray(array, SIZE);

    return 0;
}