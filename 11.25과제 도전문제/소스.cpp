#include <stdio.h>

int main(void) 
{
    char str[100]; // 입력 문자열을 저장할 배열
    int count = 0; // 대문자를 소문자로 변환한 개수

    // 문자열 입력
    printf("문장 입력 : ");
    fgets(str, sizeof(str), stdin);

    // 대문자를 소문자로 변환
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + ('a' - 'A');
            count++; // 변환된 문자 수 증가
        }
    }

    // 결과 출력
    printf("바뀐 문장: %s", str);
    printf("바뀐 문자 수: %d\n", count);

    return 0;
}