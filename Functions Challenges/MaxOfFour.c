#include <stdio.h>
int maxOfNumbers(int a,int b){
	if (a > b) {
    return a;
} else {
    return b;
}

}

int main(){
	 int nbr1, nbr2, nbr3,nbr4,max;
    printf("Give me the four numbers: \n");
    scanf("%d %d %d %d", &nbr1,&nbr2,&nbr3,&nbr4);
    
    max= maxOfNumbers((maxOfNumbers(nbr1,nbr2)),(maxOfNumbers(nbr3,nbr4)));
    
    
	printf("The max in this four numbers is : %d \n",max);
	
	
	
}
