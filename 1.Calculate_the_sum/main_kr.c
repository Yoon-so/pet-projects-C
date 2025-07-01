#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, sum;
	sum = 0; //합계를 저장할 변수 초기화

	printf("Enter 3 integers (x, y, z): "); +//3개의 정수를 입력하라는 메시지 출력 
	scanf("%d %d %d", &x, &y, &z); //3개의 정수를 입력받기

	sum += x; //x값을 합계에 더하기
	sum += y; //y값을 합계에 더하기
	sum += z; //z값을 합계에 더하기

	printf("Sum of three integers: %d\n", sum); //3개의 정수의 합계를 출력
	return 0;
}