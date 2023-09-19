#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
// int a,b;
// printf("Write a number :");
// scanf("%d",&a);
// if (a%2 == 0 ){
// 	printf("The number is even");
// }else{
// 	printf("The number is odd");
// }
// int nbr,c,i;
// printf("Write a number :");
// scanf("%d",&nbr);
// for(i=1;i<=nbr;i++){
// 	int modulo= (nbr%i);
// 	if (modulo ==0){
// 		c++;
//	 }
//}
//	 
//	 if(c==2){
//	 	printf("le nombre est premier");
//	 }else{
//	 	printf("le nombre est n'est pas premier");
//	 }

//for(i=2;i<=nbr/2;i++){
// 	int modulo= (nbr%i);
// 	if (modulo ==0){
// 		c++;
//	 }
//}
//	 
//	 if(c==0){
//	 	printf("le nombre est premier");
//	 }else{
//	 	printf("le nombre est n'est pas premier");
//	 }
// }

	printf("\t_______________find the prime number:\n\n");
	while(1){

int myNumber,i;
bool isPrime=true;
printf("\n Enter a number:");
scanf("%d",&myNumber);
for(i=2; i<myNumber/2;i++)
if(myNumber%i==0){isPrime=false;}
if( isPrime){ printf("%d is a prime number",myNumber);

}
else { printf("%d is not a prime number",myNumber);
}
}	}


