#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double mass, speed, kenergy; //질량(m), 속도(v), 운동에너지(e)를 저장할 변수 선언
	
	printf("Mass(kg): "); //질량을 입력 받기 위한 메시지 출력
	scanf("%lf", &mass); //입력한 질량을 변수 mass에 저장

	printf("Speed(m/s): "); //속도를 입력 받기 위한 메시지 출력
	scanf("%lf", &speed); //입력한 속도를 변수 speed에 저장

	kenergy = (1.0 / 2.0) * mass * speed * speed; //운동에너지 계산 (공식: E = 1/2 * m * v * v)
	printf("Kinetic energy(J): %lf\n", kenergy); //계산된 운동에너지를 출력

	return 0;
}