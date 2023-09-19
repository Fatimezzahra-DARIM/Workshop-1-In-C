#include <stdio.h>
#include <math.h>

void bisquareEquation(float a,float b, float c){
float y1,y2,y,delta,x1,x2;	
delta=pow(b,2)-(4*a*c);

printf("Delta=%f\n",delta);
if(delta < 0){
	printf("No solution for the equation (%.fx)4 + (%.fx)2 + %.f = 0 ",a,b,c);	
} else if(delta>0){
	
	y1=(-b+sqrt(delta))/(2*a);	
	y2=(-b-sqrt(delta))/(2*a);
	
	
	
	if(y1<0 && y2>0){
		x2=sqrt(y2);
		printf("The solutions of the equation (%fx)4 + (%fx)2 + %f = 0 are: \n x1=%f and x2=%f",a,b,c,x2,-x2);
	}
	if(y1>0 && y2<0){
		x1=sqrt(y1);
		printf("The solution of the equation (%fx)4 + (%fx)2 + %f = 0 are: \n x1=%f and x2=%f",a,b,c,x1,-x1);
	}
	if(y1>0 && y2>0){
		x1=sqrt(y1);
		x2=sqrt(y2);
	printf("The solutions of the equation (%.1fx)4 + (%.1fx)2 + %.1f = 0 are: \n x1=%f  x2=%.1f   x3=%.1f   and x4=%.1f",a,b,c,x1,-x1,x2,-x2);
	}
	if(y1<0 && y2<0) {
	printf("No solution");}		
	
} else {
	y=(-b)/(2*a);
	printf("The solution of the equation (%fx)4 + (%fx)2 + %f = 0 is: \n y=%f",a,b,c,y);
}



}


int main(){
float a,b,c,x1,x2;
printf("For solving the bisquare equation (ax4 + bx2 + c = 0) \n");
printf("Give me the value of a=");
scanf("%f",&a);
printf("Give me the value of b=");
scanf("%f",&b);
printf("Give me the value of c=");
scanf("%f",&c);

bisquareEquation(a,b,c);
  return 0;
}
