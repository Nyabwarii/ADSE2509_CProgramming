/*C program that accepts scores from the user between 0-100 and check whether the score is valid or invalid*/
#include <stdio.h>
int main() {
    //Variable to be used in the program
    int score;
    
    //Prompt the user for a score
    printf("Please enter a score between 0 and 100:\n");
    scanf("%d", &score);

    //Check whether the score is valid
    if(score >= 0 && score <= 100) {
        printf("%d is a valid score.\n", score);
    } else {
        printf("%d is not a valid score. Please enter a score between 0 and 100.\n", score);
    }

    return 0;
}