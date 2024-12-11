#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculate_statistics(int* arr, int size, double* sum, double* mean, double* variance, double* std_dev) 
{
    *sum = 0;
    for (int i = 0; i < size; i++) 
    {
        *sum += arr[i];
    }
    *mean = *sum / size;

    *variance = 0;
    for (int i = 0; i < size; i++) 
    {
        *variance += pow(arr[i] - *mean, 2);
    }
    *variance /= size;
    *std_dev = sqrt(*variance);
}

int main(void) 
{
    int initial_size;
    printf("�ʱ� �迭 ũ�⸦ �Է��ϼ���: ");
    scanf_s("%d", &initial_size);

    int* arr = (int*)malloc(initial_size * sizeof(int));
    printf("�Էµ� ��: ");
    for (int i = 0; i < initial_size; i++) 
    {
        scanf_s("%d", &arr[i]);
    }

    double sum, mean, variance, std_dev;
    calculate_statistics(arr, initial_size, &sum, &mean, &variance, &std_dev);

    printf("�հ�: %.2f\n", sum);
    printf("���: %.2f\n", mean);
    printf("�л�: %.2f\n", variance);
    printf("ǥ������: %.2f\n", std_dev);

    int additional_size;
    printf("�߰� �迭 ũ�⸦ �Է��ϼ���: ");
    scanf_s("%d", &additional_size);

    arr = (int*)realloc(arr, (initial_size + additional_size) * sizeof(int));
    printf("�߰��� ��: ");
    for (int i = initial_size; i < initial_size + additional_size; i++) 
    {
        scanf_s("%d", &arr[i]);
    }

    calculate_statistics(arr, initial_size + additional_size, &sum, &mean, &variance, &std_dev);

    printf("���ο� �հ�: %.2f\n", sum);
    printf("���ο� ���: %.2f\n", mean);
    printf("���ο� �л�: %.2f\n", variance);

    free(arr);
    return 0;
}