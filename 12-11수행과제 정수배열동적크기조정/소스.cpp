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
    printf("초기 배열 크기를 입력하세요: ");
    scanf_s("%d", &initial_size);

    int* arr = (int*)malloc(initial_size * sizeof(int));
    printf("입력된 값: ");
    for (int i = 0; i < initial_size; i++) 
    {
        scanf_s("%d", &arr[i]);
    }

    double sum, mean, variance, std_dev;
    calculate_statistics(arr, initial_size, &sum, &mean, &variance, &std_dev);

    printf("합계: %.2f\n", sum);
    printf("평균: %.2f\n", mean);
    printf("분산: %.2f\n", variance);
    printf("표준편차: %.2f\n", std_dev);

    int additional_size;
    printf("추가 배열 크기를 입력하세요: ");
    scanf_s("%d", &additional_size);

    arr = (int*)realloc(arr, (initial_size + additional_size) * sizeof(int));
    printf("추가된 값: ");
    for (int i = initial_size; i < initial_size + additional_size; i++) 
    {
        scanf_s("%d", &arr[i]);
    }

    calculate_statistics(arr, initial_size + additional_size, &sum, &mean, &variance, &std_dev);

    printf("새로운 합계: %.2f\n", sum);
    printf("새로운 평균: %.2f\n", mean);
    printf("새로운 분산: %.2f\n", variance);

    free(arr);
    return 0;
}