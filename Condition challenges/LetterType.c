#include <stdio.h>

int main() {
     char character;
     int ascii;
    
     printf("Enter a character: ");
     scanf("%c", &character);
     ascii=(int)character;
     if (character >= 65 && character <= 90) {
         printf("%c is an uppercase letter.\n", character);
     } else {
         printf("%c is not an uppercase letter.\n", character);
     }

     return 0;
}

//#include <stdio.h>
//
//int main() {
//     char character;
//
//     printf("Enter a character: ");
//     scanf("%c", &char);
//     if (character >= 'A' && character <= 'Z') {
//         printf("%c is an uppercase letter.\n", character);
//     } else {
//         printf("%c is not an uppercase letter.\n", character);
//     }
//
//     return 0;
//}
