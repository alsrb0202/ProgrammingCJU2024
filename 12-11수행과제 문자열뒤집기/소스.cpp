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
            start = end + 1; // ���� �ܾ��� ���� ��ġ
        }
        end++;
    }
}

int main(void) 
{
    char input[100];

    printf("�Է�: ");
    fgets(input, sizeof(input), stdin);

    //���� ����
    input[strcspn(input, "\n")] = '\0';

    reverseWord(input);

    printf("���: %s\n", input);

    return 0;
}