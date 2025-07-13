#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, sum;
	sum = 0; //Initialize variable to store the total sum

	printf("Enter 3 integers (x, y, z): "); //Print a message to enter 3 integers
	scanf("%d %d %d", &x, &y, &z); //Receive three integers as input

	sum += x; //Add the value of x to the total sum
	sum += y; //Add the value of y to the total sum
	sum += z; //Add the value of z to the total sum

	printf("Sum of three integers: %d\n", sum); //Print the sum of the 3 integers
	return 0;
}