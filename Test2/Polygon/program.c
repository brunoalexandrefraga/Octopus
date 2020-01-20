#include <stdio.h>
#include <math.h>

char *polygonType(int n)
{
    if(n < 3)
        return "Invalid";
    else if(n == 3)
        return "Triangle";
    else if(n == 4)
        return "Quadrilateral";
    else if(n == 5)
        return "Pentagon";
    else if(n == 6)
        return "Hexagon";
}


void main ()
{
    int n;

    printf("Define the number of sides\n");
    scanf("%i", &n);

    if(n < 3 || n > 6)
    {
        printf("Invalid number of sides!\n");
        return;
    }

    float x0, y0, first_x, first_y; 

    float p = 0;

    printf("Enter the coordinates\n");
    
    for(int i = 0; i <= n; i++)
    {
        float x, y;

        if(i != n)
            scanf("%f %f", &x, &y);

        if(i > 0)
            p += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0)); 
        else if(i == 0)
        {
            first_x = x;
            first_y = y;
        }

        if(i == n)
            p += sqrt((first_x - x0) * (first_x - x0) + (first_y - y0) * (first_y - y0)); 

        x0 = x;
        y0 = y;
    }

    printf("Polygon's a %s and his perimeter is %.2f u.m.\n", polygonType(n), p);
}
