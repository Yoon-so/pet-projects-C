#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double width, length, height, volume; //Declare variables to store width, length, height, and volume of the box

	//Display a message prompting the user to enter width, length, and height at once
	printf("Enter the width, length and height of the box at once: ");
	scanf("%lf %lf %lf", &width, &length, &height); //Read the input values

	volume = width * length * height; //Calculate volume using the formula: volume = width * length * height
	printf("The volume of the box is %lf\n", volume); //Display the calculated volume

	return 0;
}