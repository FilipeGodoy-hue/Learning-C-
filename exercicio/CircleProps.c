#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int radius = 0;
    float pi = 3.14;
    float area = 0.0f;
    float surface_area = 0.0f;
    float Volume = 0.0f;
    char unit = 'u';

    printf("Enter the radius of the circle:\n");
    scanf("%d", &radius);

    area = pow(radius , 2)* pi;
    surface_area = 4*pi*pow(radius , 2);
    Volume = 4/3 * pi * pow(radius , 3);


    printf("The area of the circle with radius equal to %d is: %.1f%c\n", radius , area , unit );
    printf("the surface area of a circle with radius equal to %d is %.1f %c\n", radius, surface_area, unit);
    printf("the volume of a circle with radius equal to %d is %.1f %c\n", radius, Volume, unit);

    return 0;
}