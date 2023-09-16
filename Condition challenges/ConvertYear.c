#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	const int Month=12;
	const int Days=365;
	const int Hours=8760;
	const int Minutes=525600;
	const int Seconds=3.15*pow(10,7);
	int year;
	int choice;
	printf("Enter the number of years:");
	scanf("%d",&year);
	
	printf ("1: Month\n");
	printf ("2: Days\n");
	printf ("3: Hours\n");
	printf ("4:Minutes\n");
	printf ("5: Seconds\n");
	printf("enter your choice:");
	scanf("%d",&choice);
					switch (choice){
						case 1:
							printf("%d",Month*year);
							break;
							case 2:
							printf("%d",Days*year);
							break;
							case 3:
							printf("%d",Hours*year);
							break;
							case 4:
							printf("%d",Minutes*year);
							break;
							case 5:
							printf("%d",Seconds*year);
							break;
							default:{
								printf("Faux reponses");
								break;
							}
							
			}
	
}
