#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, change; //Declare variables for entered amount and change
	int price, c1000, c500, c100; //Declare variables for item price, and count of 1000 won, 500 won, and 100 won coins

	printf("Enter the price of the item: "); //Print message for user
	scanf("%d", &price); //Get item price

	printf("Enter the amount inserted: "); //Print message for user
	scanf("%d", &money); //Get inserted amount

	change = money - price; //Calculate the change

	c1000 = change / 1000; //Calculate number of 1000-won bills
	change = change % 1000; //Calculate the remaining change

	c500 = change / 500; //Calculate number of 500-won coins
	change = change % 500; //Calculate the remaining change

	c100 = change / 100; //Calculate number of 100-won coins
	change = change % 100; //Calculate the remaining change

	printf("1000-won bills: %d\n500-won coins: %d\n100-won coins: %d\n", c1000, c500, c100); //Output the result

	return 0;
}