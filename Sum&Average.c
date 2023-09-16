#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,b,c,d,Sum;
	float Average;
	printf("Enter the number a :");
	scanf("%d",&a);
	printf("Enter the number b :");
	scanf("%d",&b);
		printf("Enter the number c :");
	scanf("%d",&c);
		printf("Enter the number d :");
	scanf("%d",&d);
	Sum=a+b+c+d;
	Average=(float)Sum/4;
		printf("The Sum is: %d\n",Sum);
			printf("The average is: %.2f\n",Average);
		
}
