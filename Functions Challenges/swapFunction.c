#include <stdio.h>

void swap( int *f,int *d){

	        *f=*f+*d;
			*d=*f-*d;
			*f=*f-*d;
	
}

int main(){
	int f,d;
			printf("Enter the first number f:");
			scanf("%d",&f);	
			

			printf("Enter the second number d:");
			scanf("%d",&d);	
			
		    swap(&f,&d);
			
			printf("the swap number: f=%d  d=%d",f,d);
			
}
