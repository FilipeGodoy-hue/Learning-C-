#include <stdio.h>
#include <string.h>

int main(){

    //MAD LIBS GAME

    // Creting variables to store the user input for the mad libs game

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    // we will use the function fgets intead of scanf to read the user input because it can read strings with spaces, while scanf will only read until the first space.

    printf("Enter an adjective(description): ");
    fgets(adjective1 , sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = 0; // Remove newline character


    printf("Enter a noun(animal or person): ");
    fgets(noun , sizeof(noun), stdin);
    noun[strlen(noun) - 1] = 0; // Remove newline character

    printf("Enter an adjective(description): ");
    fgets(adjective2 , sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = 0; // Remove newline character

    printf("Enter an verb(ending with - ing): ");
    fgets(verb , sizeof(verb), stdin);
    verb[strlen(verb) - 1] = 0; // Remove newline character

    printf("Enter an adjective(description): ");
    fgets(adjective3 , sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = 0; // Remove newline character

    printf("\n Today i went to my %s university.", adjective1);
    printf("when i arrived there, i saw %s \n" , noun);
    printf("after see him, asked whats he was doing before i arrived, and he said he was %s\n", verb);
    printf("He said the food was realy %s\n", adjective2);
    printf("So we decided to play domino after that, and we realized how %s is play and stay together at UNIVERSITY \n", adjective3);

    




    return 0;
}