#include <math.h>
#include <stdio.h>

int main() {
	float c1, c2;
	printf("Please, enter the value of two catheti: ");
	scanf("%f %f", &c1, &c2);
	float result = sqrt(c1 * c1 + c2 * c2);
	printf("Hypotenuse: %.2f\n", result); 
}

