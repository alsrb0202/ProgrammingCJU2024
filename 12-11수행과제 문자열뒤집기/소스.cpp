#include <stdio.h>
#include <string.h>

void reverseWord(char* str) 
{
    int start = 0, end = 0, length = strlen(str);

    while (end <= length)
    {
        if (str[end] == ' ' || str[end] == '\0') 
        {
            int wordEnd = end - 1;
            while (start < wordEnd) 
            {
                char temp = str[start];
                str[start] = str[wordEnd];
                str[wordEnd] = temp;
                start++;
                wordEnd--;
            }
            start = end + 1; // 다음 단어의 시작 위치
        }
        end++;
    }
}

int main(void) 
{
    char input[100];

    printf("입력: ");
    fgets(input, sizeof(input), stdin);

    //엔터 제거
    input[strcspn(input, "\n")] = '\0';

    reverseWord(input);

    printf("출력: %s\n", input);

    return 0;
}