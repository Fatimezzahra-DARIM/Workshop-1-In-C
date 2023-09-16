#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int day,month,year;
	printf("Enter the date in this format : Day/Month/Year \n");
	scanf("%d / %d / %d",&day,&month,&year);
	switch(month){
		case 1:
			printf("\n%d-January-%d",day,year);
			break;
		case 2:
			printf("\n%d-February-%d",day,year);
			break;
		case 3:
			printf("\n%d-March-%d",day,year);
			break;
		case 4:
			printf("\n%d-April-%d",day,year);
			break;
		case 5:
			printf("\n%d-May-%d",day,year);
			break;
		case 6:
			printf("\n%d-June-%d",day,year);
			break;
		case 7:
			printf("\n%d-July-%d",day,year);
			break;
		case 8:
			printf("\n%d-August-%d",day,year);
			break;
		case 9:
			printf("\n%d-September-%d",day,year);
			break;	
		case 10:
			printf("%d-October-%d",day,year);
			break;	
		case 11:
			printf("\n%d-November-%d",day,year);
			break;	
		case 12:
			printf("\n%d-December-%d",day,year);
			break;	
	}
}



//int main() {
//    srand(time(NULL));
//    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
//    int indiceJour = rand() % 7;
//
//    printf("Aujourd'hui, c'est %s.\n", jours[indiceJour]);
//
//    return 0;
//}

