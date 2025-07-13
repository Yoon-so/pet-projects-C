#include <stdio.h>

int main(void) {
	double light_speed = 300000; //Initialize speed of light (unit: km/s)
	double distance = 149600000; //Initialize distance between the Sun and the Earth (unit: km)

	double time; //Declare time variable

	time = distance / light_speed; //Calculate time: distance / speed

	printf("Speed: %f km/s\n", light_speed); //Print speed of light
	printf("Distance: %f km\n", distance); //Print distance
	printf("Time: %f seconds\n", time); //Print calculated time

	return 0;
}