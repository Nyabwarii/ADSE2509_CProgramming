/*C program that accepts a student's score in an exam and grades them according to the criteria below
70-100:A
60-69:B
50-59:C
40-49:D
0-39:E
.*/
#include <stdio.h>
int main()
{
    //Variables to be used in the program
    unsigned short score;
    char grade;

    //Prompt the user to enter the student's score in the exam
    printf("Please enter the score in the exam\n");
    scanf("%hu", &score);
    
    //Check whether the score is valid or invalid
     if(score <0 || score > 100) {
        printf("\n%hu is an invalid score.\nPlease enter a score between 0-100", score);
        return;
    } else {
        if(score>=70)
        grade='A';
                if(score>=60)
        grade='B';
                if(score>=50)
        grade='C';
                if(score>=40)
        grade='D';
      else
      grade='E';
    }
    //Display the results
    printf("\nScore:%hu\nGrade:%c");
    return 0;

}