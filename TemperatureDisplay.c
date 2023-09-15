#include <stdio.h>
#include <stdlib.h>
int main () {
	float C,F;
	printf("Write the temperature in Fahrenheit:\n");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf("the temperature in Celsius is: \n %.2f F= %.2f C \n",F,C);
	if (C>50){
		printf("Very hot\n");
	}
	else if (C<0){
		printf("Very cold\n");
	}else if (0<C<13){ printf("Cold\n");
	}else{
		printf("Hot");
	}
	
	
}
