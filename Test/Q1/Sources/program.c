#include <stdio.h>

void main () {
    int sizeA, sizeB, sizeC;

    printf("Entre com o valor das três dimensões do paralelepipedo: ");
    scanf("%i %i %i", &sizeA, &sizeB, &sizeC);
    
    if(sizeA <= 0 || sizeB <= 0 || sizeC <= 0)
    {
        printf("O valor deve ser positivo");
        return;
    }

    printf("O perímetro total do paralelepipedo é: %i\n", 4 * sizeA + 4 * sizeB + 4 * sizeC);
    printf("A área total do paralelepipedo é: %i\n", 2 * sizeA * sizeB + 2 * sizeA * sizeC + 2 * sizeB * sizeC);
    printf("O volume total do paralelepipedo é: %i\n", sizeA * sizeB * sizeC);
    

}
