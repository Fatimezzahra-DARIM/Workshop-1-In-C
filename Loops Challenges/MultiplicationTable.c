#include <stdio.h>
#include <stdlib.h>
int main(){
     int M,i,n;
     printf("Give a number:\n");
     scanf("%d",&n);
     printf("Its multiplication table is:\n");
     for(i=1;i<=10;i++){
     M=n*i;
     printf("%d*%d=%d\n",n,i,M);
}
}
