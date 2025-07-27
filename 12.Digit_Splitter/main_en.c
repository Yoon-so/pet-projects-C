#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int value; //Declare a variable to store the input integer

	printf("Enter an integer: ");
	scanf("%d", &value); //Store the entered integer into the variable 'value'

	printf("Tens digit: %d\n", value / 10); //Divide value by 10 and get the tens digit
	printf("Ones digit: %d\n", value % 10); //Get the ones digit by taking modulo 10

	return 0;
}