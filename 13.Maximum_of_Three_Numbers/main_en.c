#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, max; //Declare three numbers and variable for the maximum

	printf("Enter 3 integers: "); //Prompt to enter 3 integers
	scanf("%d %d %d", &x, &y, &z); //Store enteres values in x, y, z

	max = (x > y) ? x : y; //Store the larger of x and y in max
	max = (max > z) ? max : z; //Compare max with z and store the larger value

	printf("Maximum value: %d\n", max); //Print the maximum value

	return 0;
}