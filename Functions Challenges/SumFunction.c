#include <stdio.h>

int Sum(int a,int b){

int c=a+b;
printf("The addition of the two numbers is: %d\n", c);
return c;
}
int main(){
int a,b,c;	
	printf("Give me the first number: \n");
	scanf("%d",&a);
	printf("Give me the second number: \n");
	scanf("%d",&b);	
	 c = Sum(a, b);
    
    
    return 0;
}
