#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int value; //입력받을 정수를 저장할 변수 선언

	printf("Enter an integer: "); //'정수를 입력하시오:' 메시지 출력
	scanf("%d", &value); //입력된 정수를 변수 value에 저장 

	printf("Tens digit: %d\n", value / 10); //value를 10으로 나누어 십의 자리 출력 
	printf("Ones digit: %d\n", value % 10); //value를 10으로 나눈 일의 자리 출력

	return 0;
}