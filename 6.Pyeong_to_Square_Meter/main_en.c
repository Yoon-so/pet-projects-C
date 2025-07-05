#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	const double SQMETER_PER_PYEONG = 3.3058; //Define a constant to convert 1 pyeong to square meters
	double pyeong, result; //Variables to store the input in pyeong and the conversion result

	printf("Please enter pyeong: "); //Display a message to prompt the user to enter pyeong
	scanf("%lf", &pyeong); // Store the entered pyeong value in the variable pyeong

	result = pyeong * SQMETER_PER_PYEONG; //Convert the entered pyeong value to square meters
	printf("It's %lf square meters\n", result); //Output the result in square meters

	return 0;
}