#include <stdio.h>

int main(void) {
	int x = 10; //x값 초기화
	int y = 20; //y값 초기화
	printf("Before: x=%d y=%d\n", x, y); //x와 y의 초기 값 출력

	int tmp; //값 교환을 위한 임시 변수 선언
	tmp = x; //x의 값을 tmp에 저장
	x = y;	 //x의 값이 y로 변경
	y = tmp; //tmp에 저장된 x의 값을 y에 저장

	printf("After: x=%d y=%d\n", x, y); //x와 y의 값 교환 후 출력

	return 0;
}