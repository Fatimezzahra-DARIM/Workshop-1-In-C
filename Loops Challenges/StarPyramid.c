#include <stdio.h>
#include <stdlib.h>

int main(){
	int numberLine, space,star,i;
		printf("Please enter the number of lines:\n");
		scanf("%d",&numberLine);
		
		printf("******** Star Pyramid *********'\n");
		
		
		for(i=1;i<=numberLine;i++){
			 
			 for(space=1;space<=(numberLine-i);space++){
			 	printf("  ");
			 }
			 for(star=1;star<=(2*i)-1;star++){
			 	printf("* ");
			 }
			
			 printf("\n");
		}
}
 

//int main(){
//int l,i,n;
//
//printf("Please enter the number of columns:\n");
//scanf("%d",&l);
//
//printf("******** Star Pyramid *********'\n");
//
//for(i=1;i<l;i+=2){
//	
//	
//      for (n=1;n<=l-i;n++){
//				printf(" ");
//                          }
//      for (n=1;n<=i;n++){
//         		printf(" *");
//						}
//    
//   printf("\n");
//   
//}
//return 0;
//}
