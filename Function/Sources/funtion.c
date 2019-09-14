#include <stdio.h>

int main() {
	float x;
	printf("A number, please: ");
	scanf("%f", &x);
	float result = (x * x + 3) * (2 * x - 4/(x * x * x * x + 1)) + 2;
	printf("f(%.2f) = %.2f\n", x, result);
}
