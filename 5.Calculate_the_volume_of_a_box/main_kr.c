#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double width, length, height, volume; //상자의 가로, 세로, 높이, 부피를 저장할 변수 선언

	//상자의 가로, 세로, 높이를 한번에 입력 받기 위한 메시지 출력
	printf("Enter the width, length and height of the box at once: ");
	scanf("%lf %lf %lf", &width, &length, &height); //입력 받음

	volume = width * length * height; //입력된 가로, 세로, 높이를 사용하여 부피를 계산 (부피 = 깊이 * 너비 * 높이)
	printf("The volume of the box is %lf\n", volume); //계산된 부피를 출력

	return 0;
}