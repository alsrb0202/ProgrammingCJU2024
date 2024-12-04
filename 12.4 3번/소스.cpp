#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define MAX_SIZE 10 //�迭 ũ��
#define INIT_VALUE -1 //�ʱ�ȭ�� Ư�� ����(������� �ʴ� �ε����� ��Ÿ��)

// �迭�� ¦���� Ȧ�� �迭�� �и��ϴ� �Լ�
void CalcEvenOddArray(int* arr, int* evenArr, int* oddArr, int size, int* evenCount, int* oddCount) 
{
    *evenCount = 0; //¦�� ī��Ʈ �ʱ�ȭ
    *oddCount = 0;  //Ȧ�� ī��Ʈ �ʱ�ȭ

    //�迭�� ��ȸ�ϸ� ¦���� Ȧ���� ����
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != INIT_VALUE)//��ȿ�� ���� Ȯ�� 
        { 
            if (arr[i] % 2 == 0) 
            {
                evenArr[*evenCount] = arr[i];//¦�� �迭�� �߰�
                (*evenCount)++;
            }
            else 
            {
                oddArr[*oddCount] = arr[i];//Ȧ�� �迭�� �߰�
                (*oddCount)++;
            }
        }
    }
}

//�迭�� ����ϴ� �Լ�
void PrintArray(const int* arr, int size, const char* msg) 
{
    printf("%s: ", msg);
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != INIT_VALUE)//�ʱ�ȭ�� ���� ������� ����
        {
            printf("%d ", arr[i]);
        }
        else 
        {
            printf("00 ");//������� �ʴ� �ε����� '00'�� ǥ��
        }
    }
    printf("\n");
}

int main(void) 
{
    int arr[MAX_SIZE]; //���� �迭
    int evenArr[MAX_SIZE]; //¦�� �迭
    int oddArr[MAX_SIZE]; //Ȧ�� �迭
    int evenCount, oddCount; //¦���� Ȧ�� ����

    //���� �õ� �ʱ�ȭ
    srand((unsigned int)time(NULL));

    //�迭 ���� 0 ~ 100 ������ ���� ���� �� 
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        arr[i] = rand() % 101; 
    }

    //������ �迭 ���
    PrintArray(arr, MAX_SIZE, "������ �迭");

    //�ʱ�ȭ�� ¦�� �� Ȧ�� �迭
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        evenArr[i] = INIT_VALUE; //¦�� �迭 �ʱ�ȭ
        oddArr[i] = INIT_VALUE;  //Ȧ�� �迭 �ʱ�ȭ
    }

    //¦���� Ȧ�� �迭 ���
    CalcEvenOddArray(arr, evenArr, oddArr, MAX_SIZE, &evenCount, &oddCount);

    //¦�� �迭 ���
    PrintArray(evenArr, MAX_SIZE, "¦�� �迭");
    //Ȧ�� �迭 ���
    PrintArray(oddArr, MAX_SIZE, "Ȧ�� �迭");

    return 0;
}