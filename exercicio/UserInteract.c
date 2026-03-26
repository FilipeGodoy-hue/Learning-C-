#include <stdio.h>

int main(){

    //SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency ='R';
    float total = 0.0f;

    printf("What item do you want to buy? ");
    scanf(" %s", item);
    printf("How much is the price of this item? ");
    scanf(" %f", &price);
    printf("How many do you want to buy? ");
    scanf(" %d", &quantity);
    printf("What currency do you want to pay with? ");
    scanf(" %c", &currency);

    // notice the spaces between the % and the format specifier in each scanf function!

    total = price * quantity;


    printf("the total cost of the purchase (%s) is: %.2f %c\n ", item, total , currency);

    // the %.2f comes only in the printf funcition!

    // the printf function comes in the end!
    return 0;
}