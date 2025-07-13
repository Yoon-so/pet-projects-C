#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int id, pass; //Declare variables to store the ID and password
	printf("Please enter your ID and password using 4 digits.\n");

	printf("id: ____\b\b\b\b"); //Code to remove underline when entering the ID
	scanf("%d", &id); //Receive ID input

	printf("pass: ____\b\b\b\b"); //Code to remove underline when entering the Password
	scanf("%d", &pass); //Receive Password input

	//Print received ID and Password
	printf("The ID entered is \"%d\" and the password is \"%d\"\n", id, pass);
	return 0;
}