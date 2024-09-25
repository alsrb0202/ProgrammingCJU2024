#include <stdio.h>

int main(void)
{
	
	int length;
	int heigt;
	double radius=0.0;

	printf("삼각형 또는 사각형의 높이와 넓이와 입력 원이나 구의 반지름을 입력:");
	scanf_s("%d%d%lf",&length,&heigt,&radius);
	printf("사각형의 넓이 : %d\n",length * heigt);
	printf("삼각형의 넓이 : %d\n",length * heigt/ 2);
	printf("원의넓이 : %.2lf\n", radius * radius * 3.14);
	printf("구의 겉넓이 : %.2lf\n", radius * radius * 3.14 * 4);
	printf("구의 체적 : %.2lf\n", radius * radius * radius * 3.14 * 4 / 3);


	return 0;
}