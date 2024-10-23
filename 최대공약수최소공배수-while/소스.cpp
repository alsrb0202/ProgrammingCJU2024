#include <stdio.h>

int main(void) 
{
    int num1; 
    int num2; 
    int yaksu; 
    int baesu;

    printf("최대공약수와 최대공배수를 알아볼 수 2개를 입력: ");
    scanf_s("%d %d", &num1, &num2);

    // 최대공약수 계산 (while 반복문 사용)
    yaksu = (num1 < num2) ? num1 : num2; // 작은 수로 초기화
    while (yaksu > 0)
    {
        if (num1 % yaksu == 0 && num2 % yaksu == 0)
        {
            break; // 최대공약수 찾음
        }
        yaksu--; // 약수를 1씩 감소
    }

    // 최소공배수 계산
    baesu = (num1 * num2) / yaksu;

    printf("최대공약수: %d\n", yaksu);
    printf("최소공배수: %d\n", baesu);

    return 0;
}