#include <stdio.h>
#include <stdlib.h>

int main() {
char C;
printf("Enter a character:");
scanf("%c",&C);
switch(C){
case'a': 
case'e':
case'i':
case'o':
case'u':
case'y':
printf("the character is a vowel");
break;
case'b':
case'c':
case'd':
case'f':
case'g':
case'h':
case'j':
case'k':
case'l':
case'm':
case'n':
case'p':
case'q':
case'r':
case's':
case't':
case'v':
case'w':
case'x':
case'z':
printf("the character is a consonant");
break;
default:
printf("Not a letter");
break;
}
return 0;
}
