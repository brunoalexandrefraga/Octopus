#include <stdio.h>
#include <operations.h>

void main()
{
    int n, p;
    float result;

    printf("n, p\n");
    scanf("%i %i", &n, &p);

    if(p >= n)
    { 
        printf("n must be greater than p!\n");
        return;
    }

    result = combination(n, p);

    printf("n! = %.2f\n", result);
}


