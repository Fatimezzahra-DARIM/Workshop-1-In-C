#include <stdio.h>

int PGCD(int a, int b) {
    if (b == 0) {
        return a; 
    } else {
        return PGCD(b, a % b); 
    }
}

int main() {
    int a, b, c;
    printf("Give me the first number: \n");
    scanf("%d", &a);
    printf("Give me the second number: \n");
    scanf("%d", &b);
    
    if (a > 0 && b > 0) {
        c = PGCD(a, b);
        printf("The PGCD is %d\n", c);
    } else {
        printf("Both numbers must be greater than 0.\n");
    }

    return 0;
}

