#include <stdio.h>
#include <stdlib.h>
  int main(){
  int a,b,c;
  printf("Please enter a 3-digit integer: ");
  scanf("%d",&a);
  c=a;
  b=(a%10)*100;
  a=a/10;
  b= b+(a%10)*10;
  a/=10;
  b+=a;
  printf("The reverse %d number is: %d \n",c,b);
  }
