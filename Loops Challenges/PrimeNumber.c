#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	printf("\t_______________find the prime number_______________\n\n");

			int myNumber,i;
			bool isPrime=true;
			
			
			printf("\n Enter a number: ");
			scanf("%d",&myNumber);
			
			for(i=2; i<myNumber/2;i++){
			
			if(myNumber%i==0){
								isPrime=false;
							}
									};
			if(isPrime){
							printf("%d is a prime number",myNumber);
			} else {
				printf("%d is not a prime number",myNumber);
			}
}
