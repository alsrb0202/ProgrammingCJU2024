#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define MAX_SIZE 10 //배열 크기
#define INIT_VALUE -1 //초기화할 특정 숫자(사용하지 않는 인덱스를 나타냄)

// 배열을 짝수와 홀수 배열로 분리하는 함수
void CalcEvenOddArray(int* arr, int* evenArr, int* oddArr, int size, int* evenCount, int* oddCount) 
{
    *evenCount = 0; //짝수 카운트 초기화
    *oddCount = 0;  //홀수 카운트 초기화

    //배열을 순회하며 짝수와 홀수를 구분
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != INIT_VALUE)//유효한 값만 확인 
        { 
            if (arr[i] % 2 == 0) 
            {
                evenArr[*evenCount] = arr[i];//짝수 배열에 추가
                (*evenCount)++;
            }
            else 
            {
                oddArr[*oddCount] = arr[i];//홀수 배열에 추가
                (*oddCount)++;
            }
        }
    }
}

//배열을 출력하는 함수
void PrintArray(const int* arr, int size, const char* msg) 
{
    printf("%s: ", msg);
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != INIT_VALUE)//초기화된 값은 출력하지 않음
        {
            printf("%d ", arr[i]);
        }
        else 
        {
            printf("00 ");//사용하지 않는 인덱스는 '00'로 표시
        }
    }
    printf("\n");
}

int main(void) 
{
    int arr[MAX_SIZE]; //원본 배열
    int evenArr[MAX_SIZE]; //짝수 배열
    int oddArr[MAX_SIZE]; //홀수 배열
    int evenCount, oddCount; //짝수와 홀수 개수

    //랜덤 시드 초기화
    srand((unsigned int)time(NULL));

    //배열 생성 0 ~ 100 범위의 랜덤 정수 값 
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        arr[i] = rand() % 101; 
    }

    //생성된 배열 출력
    PrintArray(arr, MAX_SIZE, "생성된 배열");

    //초기화된 짝수 및 홀수 배열
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        evenArr[i] = INIT_VALUE; //짝수 배열 초기화
        oddArr[i] = INIT_VALUE;  //홀수 배열 초기화
    }

    //짝수와 홀수 배열 계산
    CalcEvenOddArray(arr, evenArr, oddArr, MAX_SIZE, &evenCount, &oddCount);

    //짝수 배열 출력
    PrintArray(evenArr, MAX_SIZE, "짝수 배열");
    //홀수 배열 출력
    PrintArray(oddArr, MAX_SIZE, "홀수 배열");

    return 0;
}