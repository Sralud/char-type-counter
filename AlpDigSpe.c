#include <stdio.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");

    int alphabets = 0, digits = 0, special = 0;

    for (int index = 0; index < 99 && scanf("%c", &inputString[index]) == 1 && inputString[index] != '\n'; ++index) {
        char currentChar = inputString[index];

        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            alphabets++;
        } else if (currentChar >= '0' && currentChar <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    inputString[99] = '\0'; 

    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, special);

    return 0;
}
