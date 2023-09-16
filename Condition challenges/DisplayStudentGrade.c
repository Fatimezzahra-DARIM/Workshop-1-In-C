#include <stdio.h>

int main() {
     float average;

     printf("Enter the student's average: ");
     scanf("%f", &average);

     if (average < 10) {
         printf("Recalibrated\n");
     } else if (average >= 10 && average < 12) {
         printf("Fair\n");
     } else if (average >= 12 && average < 14) {
         printf("Good enough\n");
     } else if (average >= 14 && average < 16) {
         printf("Good\n");
     } else if (average >= 16) {
         printf("Very good\n");
     } else {
         printf("Invalid average\n");
     }

     return 0;
}
