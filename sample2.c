/*C program that accepts a vowel from the user and checks whether it's a vowel.*/
#include <stdio.h>
int main() {
    char ch;
    int isVowel = 0;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
    }

    // Display the result
    if(isVowel) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}