#include <stdio.h>
#include <operations.h>

float f(float x)
{
    return x * x - 5 * x + 4;
}

float integral (float x0, float x1)
{
    float dx, result;

    result = 0;
    dx = 0.001;

    for(int x = x0; x < x1; x += dx)
        result += dx * (f(x) + f(x + dx) / 2);
}


void main ()
{
    float x0, x1, area;

    printf("\n\nDefined integral of function f(x) = x² + 5x + 0\n\n");
    printf("Interval [x0, x1]");
    scanf("%f %f", &x0, &x1);
    
    

}
