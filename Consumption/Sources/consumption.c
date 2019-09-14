#include <stdio.h>

int main() {
	printf("Fuel value, value paid and distance travaled: ");
	float price, value, distance;
	scanf("%f %f %f", &price, &value, &distance);
	printf("The mean consumption of this vehicle is: %f\n", distance / price / value);
	printf("The mean consumption of the usage of vehicle is: %f\n", value / distance);  
}


