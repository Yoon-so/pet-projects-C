#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, max; //정수 3개와 최대값 변수 선언

	printf("Enter 3 integers: "); //"정수 3개를 입력하시오:" 출력
	scanf("%d %d %d", &x, &y, &z); //입력된 정수를 x, y, z에 저장

	max = (x > y) ? x : y; //x와 y 중에서 더 큰 값을 max에 저장
	max = (max > z) ? max : z; //max와 z 중에서 더 큰 값을 다시 max에 저장

	printf("Maximum value: %d\n", max); //최대값을 출력

	return 0;
}