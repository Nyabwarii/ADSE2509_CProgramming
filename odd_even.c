/*C program that accepts a number from the user and tells them whether it's odd or even.*/
#include <stdio.h>// Preprocessor directive to include standard input and output functions

//main function - execution starts here
int main() {
   //Variable to be used in the program
   int userNumber;
   
   //Prompt the user for a number
    printf("Please enter a number and l\'ll tell you if it\'s odd or even:\n");
    scanf("%d", &userNumber);

    //Check whether the number is odd or even
    int remainder = userNumber % 2;
    if(remainder == 1) {
        printf("%d is an odd number.\n", userNumber);
    } else {
        printf("%d is an even number.\n", userNumber);
    }

    return 0;
}