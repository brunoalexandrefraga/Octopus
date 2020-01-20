#include <stdio.h>
#include <stdlib.h>

float f(float x){
    return x * x - 7 * x + 3;
}
   
void main(){
    float x0, x1, xm;
    printf("Get roots of function: f(x) = x² - 7x + 3\n\n)");

    printf("Inform the interval value [x0, x1]: \n");
    scanf("%f %f", &x0, &x1);

    if(f(x0) * f(x1) > 0){
        printf("The function f there's no roots between this interval!");
    } else {
        xm = (x0 + x1) / 2;
    }
}
