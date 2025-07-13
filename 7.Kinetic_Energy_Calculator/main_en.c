#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double mass, speed, kenergy; //Declare variables to store mass(m), speed(v) and kinetic energy(e)
	
	printf("Mass(kg): "); //Print a message to enter mass
	scanf("%lf", &mass); //Store the entered mass in the variable 'mass'

	printf("Speed(m/s): "); //Print a message to enter speed
	scanf("%lf", &speed); //Store the entered speed in the variable 'speed'

	kenergy = (1.0 / 2.0) * mass * speed * speed; //Calculate kinetic energy (Formula: E = 1/2 * m * v * v)
	printf("Kinetic energy(J): %lf\n", kenergy); //Print the calculated kinetic energy

	return 0;
}