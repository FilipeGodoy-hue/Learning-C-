#include <stdio.h>

int main(){
    // Now we will see arithmetic operators in C language.
        int a = 5;
        int b = 3;
        int z = 0;

        z = a + b; // addition
        printf("The sum of %d and %d is %d\n", a, b, z);

        int x = 6;
        float y = 4; // in this case, we will take a integer number as a float number, because we want to see the result of the division with decimal places.
        float w = 0;

        w = x/y; // division
        printf("The division of %d by %d is %.2f\n", x, y ,w);
        int d = 9;
        int e = 2;
        int f = 0;

        f = d * e; // multiplication
        printf("The multiplication of %d and %d is %d\n", d, e, f);







    return 0;
}