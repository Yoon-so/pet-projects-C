#include <stdio.h>

int main(void) {
	int x = 10; //Initialize x value
	int y = 20; //Initialize y value
	printf("Before: x=%d y=%d\n", x, y); //Print initial values of x and y

	int tmp; //Declare a temporary variable for swapping values
	tmp = x; //Store the value of x in tmp
	x = y;	 //Assign the value of y to x
	y = tmp; //Assign the value stored in tmp (original x) to y

	printf("After: x=%d y=%d\n", x, y); //Print values of x and y after swapping

	return 0;
}