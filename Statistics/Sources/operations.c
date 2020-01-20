#include <operations.h>

float factorial(int n)
{
    float result = 1;

    if(n <= 0)
        return 0;

    for(n; n > 0; n--)
       result *= n; 

    return result;
}

float arrengement(int n, int p)
{
    float fn = factorial(n);
    float fp = factorial(p);
    return fn / fp;
}

float combination(int n, int p)
{
    return arrengement(n, p) / factorial(n - p);
}
