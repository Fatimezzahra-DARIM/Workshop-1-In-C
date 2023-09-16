#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int main(){
  float Xm,Ym,Xn,Yn;
  float MN;
  printf("Please enter coordinate X of M: ");
  scanf("%f",&Xm);
  printf("Please enter the Y coordinate of M: ");
  scanf("%f",&Ym);
  printf("Please enter coordinate X of N: ");
  scanf("%f",&Xn);
  printf("Please enter coordinate Y of N: ");
  scanf("%f",&Yn);
 
  MN=sqrt(pow((Xn-Xm),2)+pow((Yn-Ym),2));
  printf("The distance MN is: %.2f",MN);
  return 0;
  }
