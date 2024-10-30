#include <stdio.h>

// 섭씨를 화씨로 변환하는 함수
float CtoF(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// 화씨를 섭씨로 변환하는 함수
float Ftoc(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    float temperature, convertedTemperature;

    // 변환 옵션 안내
    printf("변환할 온도 단위를 선택하세요:\n");
    printf("1. 섭씨 -> 화씨\n");
    printf("2. 화씨 -> 섭씨\n");
    printf("선택: ");
    scanf_s("%d", &choice);

    if (choice == 1) {
        // 섭씨 -> 화씨 변환
        printf("섭씨 온도를 입력하세요: ");
        scanf_s("%f", &temperature);
        convertedTemperature = CtoF(temperature);
        printf("화씨 온도: %.2f °F\n", convertedTemperature);
    }
    else if (choice == 2) {
        // 화씨 -> 섭씨 변환
        printf("화씨 온도를 입력하세요: ");
        scanf_s("%f", &temperature);
        convertedTemperature = Ftoc(temperature);
        printf("섭씨 온도: %.2f °C\n", convertedTemperature);
    }
    else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}