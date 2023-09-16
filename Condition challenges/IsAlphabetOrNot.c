#include <stdio.h>

int main() {
     char character;

     printf("Enter a character: ");
     scanf("%c", &character);

     if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {

         if (character >= 'a' && character <= 'z') {
             printf("%c is a lowercase letter.\n", character);
         } else {
             printf("%c is an uppercase letter.\n", character);
         }
     } else {
         printf("%c is not a letter of the alphabet.\n", character);
     }

     return 0;
}
