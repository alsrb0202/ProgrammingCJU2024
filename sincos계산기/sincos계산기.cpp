#include <stdio.h>

// 각도를 라디안으로 변환하는 함수
double Radcon(double degrees)
{
    return degrees * (3.14159265358979323846 / 180.0);
}

// 사인 값을 계산하는 함수
double sincal(double degrees)
{
    double radians = Radcon(degrees);
    double result = radians; // 첫 번째 항
    double term = radians; // 현재 항
    int n;

    for (n = 1; n < 10; n++)// 10항까지 계산
    { 
        term *= -radians * radians / ((2 * n) * (2 * n + 1));
        result += term;
    }
    return result;
}

// 코사인 값을 계산하는 함수
double coscal(double degrees)
{
    double radians = Radcon(degrees);
    double result = 1.0; // 첫 번째 항
    double term = 1.0; // 현재 항
    int n;

    for (n = 1; n < 10; n++) // 10항까지 계산
    {
        term *= -radians * radians / ((2 * n - 1) * (2 * n));
        result += term;
    }
    return result;
}

int main(void)
{
    double angle;
    printf("각도를 입력하세요 (0~180도): ");
    scanf_s("%lf", &angle);

    if (angle < 0 || angle > 180) {
        printf("유효한 각도가 아닙니다.\n");
    }
    else {
        printf("사인(%lf) = %lf\n", angle, sincal(angle));
        printf("코사인(%lf) = %lf\n", angle, coscal(angle));
    }

    return 0;
}