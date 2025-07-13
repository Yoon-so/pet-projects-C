#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define SEC_PER_MINUTE 60 //1분은 60초를 의미하는 상수 정의

int main(void) {
	int input, minute, second; //입력받은 초, 변환된 분과 초를 저장할 변수

	printf("Enter seconds: "); //초 입력 요청 메시지 출력
	scanf("%d", &input); //사용자로부터 초 입력 받기

	minute = input / SEC_PER_MINUTE; //전체 초를 60으로 나눠 분 계산
	second = input % SEC_PER_MINUTE; //나머지를 사용해 초 계산

	printf("%d seconds is %d minutes %d seconds.\n", input, minute, second); //변환 결과 출력
	
	return 0;
}