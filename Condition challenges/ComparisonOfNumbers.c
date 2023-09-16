#include <stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	if(a==b){ 
	c=(a+b)*3;
	printf("The triple of the sum of the two numbers is:%d",c );
	}else {
		printf("The numbers is not the same");
	}
}
