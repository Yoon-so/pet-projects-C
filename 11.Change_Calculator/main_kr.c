#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, change; //투입한 금액과 거스름돈 변수 선언 
	int price, c1000, c500, c100; //물건 가격, 1000원, 500원, 100원 동전 개수 변수 선언

	printf("Enter the price of the item: "); //"물건 값을 입력하시오:" 메시지 출력
	scanf("%d", &price); //물건 가격 입력 받기

	printf("Enter the amount inserted: "); //"투입한 금액을 입력하시오:" 메시지 출력
	scanf("%d", &money); //투입 금액 입력 받기

	change = money - price; //거스름돈 계산

	c1000 = change / 1000; //1000원 지폐 개수 계산
	change = change % 1000; //남은 거스름돈 계산

	c500 = change / 500; //500원 동전 개수 계산
	change = change % 500; //남은 거스름돈 계산

	c100 = change / 100; //100원 동전 개수 계산
	change = change % 100; //남은 거스름돈 계산

	printf("1000-won bills: %d\n500-won coins: %d\n100-won coins: %d\n", c1000, c500, c100); //결과 출력

	return 0;
}