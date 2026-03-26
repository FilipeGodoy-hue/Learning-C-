#include <stdio.h>

int main(){
    // This is my fourth program in C language, and I am learning how to use variables in C!

    int age = 0;
    float height = 0.0f;
    char name[50] = "";

    // We need to give the user a prompt to enter their age, height and name, so we can use the scanf function to read the input from the user and store it in the variables we declared above.
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Whats your name? ");
    scanf("%s", name);
    printf("How tall are you? ");
    scanf("%f", &height);

    printf("%d\n", age);
    printf("%.2f\n", height);
    printf("%s", name);
    // the printf function comes in the end!
    getchar(); 

    return 0;
}