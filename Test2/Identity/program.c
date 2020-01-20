#include <stdio.h>

void main (){
    int n,m = 0;
    printf("Indique a ordem da matriz: \n");

    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}
