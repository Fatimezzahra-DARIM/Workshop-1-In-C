#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void isPrimeFunction(int myNumber){
		int i;
	bool isPrime=true;


for(i=2; i<myNumber/2;i++)
if(myNumber%i==0){isPrime=false;}
if( isPrime){ printf("%d is a prime number",myNumber);

}
else { printf("%d is not a prime number",myNumber);
}
}	
	





int main(){
	printf("\t_______________find the prime number_______________\n\n");
	int myNumber,i;
	bool isPrime=true;
		while(1){

				
					printf("\n Enter a number:");
					scanf("%d",&myNumber);
					
					isPrimeFunction(myNumber);
					
}
}
