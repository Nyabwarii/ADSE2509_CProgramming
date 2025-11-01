/*C program to demonstrate the various C arrithmetic operations.*/
#include <stdio.h>
    int main()
    {
        //Variables to be used in the program
        int firstNum, secondNum;

        //Input two numbers
        printf("Please enter 2 intergers\n");
        scanf("%d %d", &firstNum, &secondNum);

        //Display the result of the various arithmetic operations
        printf("\n C Arithmetic Operations");
        printf("\n ------------------------------");
        printf("\n Addition: %d + %d=%d", firstNum,secondNum,firstNum+secondNum);
        printf("\n Subtraction: %d-%d=%d",firstNum,secondNum, firstNum - secondNum);
        printf("\n Multiplication: %d*%d=%d", firstNum, secondNum, firstNum * secondNum);
        printf(" \n Division: %d/%d=%d", firstNum, secondNum, firstNum/ secondNum);
        printf(" \n Modulus: %d %% %d=%d", firstNum, secondNum, firstNum% secondNum);

        //Increment and decrement operators
        printf("\nIncrement and decrement operations");
        printf("\n ------------------------------");
        printf("\nPre-increment(++firstNum)=%d", ++firstNum);
        printf("\nPost-increment(firstNum++)=%d", firstNum++);

        printf("\nPre-decrement(--secondNum)=%d", --secondNum);
        printf("\nPost-decrement(secondNum--)=%d", secondNum--); 

        printf("\nValue of firstNum & secondNum after post increment and decrement respectively: %d and %d",
        firstNum, secondNum);
        return 0;
    }