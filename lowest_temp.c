/*C program that accepts temperature from 3 days of the week and displays the coldest day*/
#include <stdio.h>
int main() {
    //Variables to be used in the program to show the temperatures
    float temp_day1, temp_day2, temp_day3;
    
    //Prompt the user to enter temperatures for 3 days
    printf("Please enter the temperature in Celcius for Day 1:\n");
    scanf("%f", &temp_day1);
    
    printf("Please enter the temperature in Celcius for Day 2:\n");
    scanf("%f", &temp_day2);
    
    printf("Please enter the temperature in Celcius for Day 3:\n");
    scanf("%f", &temp_day3);
    
    //Determine the coldest day
    if(temp_day1 <= temp_day2 && temp_day1 <= temp_day3) {
        printf("Day 1 is the coldest with a temperature of %.2f\n", temp_day1);
    } else if(temp_day2 <= temp_day1 && temp_day2 <= temp_day3) {
        printf("Day 2 is the coldest with a temperature of %.2f\n", temp_day2);
    } else {
        printf("Day 3 is the coldest with a temperature of %.2f\n", temp_day3);
    }
    
    return 0;
}