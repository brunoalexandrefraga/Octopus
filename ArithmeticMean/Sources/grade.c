#include <stdio.h>
#include <stdbool.h>

int main(){
	float n1, n2, n3;
	printf("Please, enter three notes: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	bool HadError = false;
	if (n1 > 10 || n1 < 0)
	{
		HadError = true;
		goto ExitJmp;
	}
	if (n2 > 10 || n2 < 0)
	{
		HadError = true;
		goto ExitJmp;
	}
	if (n3 > 10 || n3 < 0)
	{
		HadError = true;
		goto ExitJmp;
	}
	printf("The arithmetic mean of your three grades is: %.2f\n", (n1 + n2 + n3) / 3);
	
ExitJmp:
	if(HadError)
		printf("Error\n");
	return 0;
}

