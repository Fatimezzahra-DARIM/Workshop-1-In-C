#include <stdio.h>
#include <math.h>

int main() {
float a,b,c,delta,x,x1,x2 ;
printf("Please enter the values of a,b and c: \n");
scanf("%f%f%f",&a,&b,&c);
delta=pow(b,2)-(4*a*c);
if(delta<0){

printf("No real solutions");}
else if (delta==0){
x=(-b)/(2*a);
printf("The solution is: %.2f",x);
}
else {
x1=(-b - sqrt(delta))/(2*a);
x2=(-b + sqrt(delta))/(2*a);
printf ("The solutions are: %.2f and %.2f",x1,x2);
}
return 0;
}
