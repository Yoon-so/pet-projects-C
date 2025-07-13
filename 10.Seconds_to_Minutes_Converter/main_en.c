#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define SEC_PER_MINUTE 60 //Define constant: 1 minute = 60 seconds

int main(void) {
	int input, minute, second; //Variables to store the input in seconds, and the converted minutes and seconds

	printf("Enter seconds: "); //Print message asking user to enter time in seconds
	scanf("%d", &input); //Receive input from the user (seconds)

	minute = input / SEC_PER_MINUTE; //Calculate number of minutes from total seconds
	second = input % SEC_PER_MINUTE; //Calculate remaining seconds after full minutes

	printf("%d seconds is %d minutes %d seconds.\n", input, minute, second); //Print the converted result
	
	return 0;
}