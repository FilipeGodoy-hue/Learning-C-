#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND INTEREST CALCULATOR

    float principal = 0.0f;
    float rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    float totalAmount = 0.0f;


    printf("Copound interest calculator \n");

    printf("Enter the principal (P): \n");
    scanf("%f" , &principal);

    printf("Enter the interest rate % (r): \n");
    scanf("%f" , &rate);
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the number of years (t): \n");
    scanf("%d" , &years);

    printf("Enter the number of times compounded per year (n): \n");
    scanf("%d", &timesCompounded);

    totalAmount = principal * pow(1+ rate/timesCompounded , timesCompounded * years);



    return 0;
}