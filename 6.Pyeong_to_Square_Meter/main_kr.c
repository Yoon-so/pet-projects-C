#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	const double SQMETER_PER_PYEONG = 3.3058; //1평을 제곱미터로 변환하기 위한 상수 정의
	double pyeong, result; //평수를 입력받을 변수와 결과를 저장할 변수

	printf("Please enter pyeong: "); //평수를 입력하라는 메시지 출력
	scanf("%lf", &pyeong); //입력된 평수를 변수 pyeong에 저장

	result = pyeong * SQMETER_PER_PYEONG; //입력된 평수를 제곱미터로 변환
	printf("It's %lf square meters\n", result); //변환된 제곱미터 결과를 출력

	return 0;
}