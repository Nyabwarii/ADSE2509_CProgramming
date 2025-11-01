/*C program that accepts values between 1-4 to show 
1- Appetizer
2- Main Dish 
3- Dessert
4- Drinks
any other number||input- invalid option */
#include <stdio.h>
    int main() {
        //Variable to be used in the program
        int menu_option;
        
        //Prompt the user to enter a menu option and assign the number to each menu item
        printf("Please enter a menu option (1-4):\n");
        printf("1- Appetizer\n2- Main Dish\n3- Dessert\n4- Drinks\n");
        scanf("%d", &menu_option);

        //Check whether the menu option entered by the user is valid or invalid
        switch(menu_option) {
            case 1:
                printf("You have selected Appetizer.\n");
                break;
            case 2:
                printf("You have selected Main Dish.\n");
                break;
            case 3:
                printf("You have selected Dessert.\n");
                break;
            case 4:
                printf("You have selected Drinks.\n");
                break;
            default:
                printf("%d is an invalid option. Please select a number between 1 and 4.\n", menu_option);
        }
        return 0;
    }