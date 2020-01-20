#include <stdio.h>
#include <higherNumber.h>
#include <stdlib.h>

void main ()
{
    int size = 5;
    int values[size];
    getNumbers(values, size);
    int higherNumber = fHigherNumber(values, size);
    printf("%d ", higherNumber);
}

void getNumbers(int *values, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Entre com o %iº número: ", i + 1);
        scanf("%d", &values[i]);
    }
}

int fHigherNumber(int values[], int size)
{
    if (size <= 0)
        return -1; 

    int higherNumber = values[0];
    for (int i = 1; i < size; i++) 
        if(values[i] > higherNumber)
            higherNumber = values[i];

    return higherNumber; 
}
