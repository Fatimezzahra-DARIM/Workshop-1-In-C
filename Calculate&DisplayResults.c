#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,b;
	printf("Enter the number a :\n");
	scanf("%d",&a);
	printf("Enter the number b :\n");
	scanf("%d",&b);
	printf("The subtraction is: %d+%d = %d\n",a,b,a+b);
	printf("The addition is: %d-%d = %d\n",a,b,a-b);
	printf("The multiplication is: %d*%d =%d\n",a,b,a*b);
	printf("The division is: %d/%d = %.2f\n",a,b,(float)a/(float)b);
	printf("The division remainder: %d %% %d = %d\n",a,b,a%b);
	   }
