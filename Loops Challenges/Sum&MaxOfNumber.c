#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,nbr,somme=0,max=0;
	do{
		printf(" Enter a number:");
		scanf("%d",&nbr);
		
		
	}while (nbr<100 && nbr>=0 );
		somme+=nbr;
		if(nbr>max) max=nbr;
		
		else{ printf(" The number is between 0 et 100\n");
		}
		printf("The sum is : %d\n",somme);
		printf("The max is : %d\n",max);
}
