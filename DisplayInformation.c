#include <stdio.h>
#include <stdlib.h>
int main () {
	int age;
	int PhoneNumber;
	char FirstName [16];
	char LastName [16];
	char Gender [10];
	printf("Personal information:\n");
	printf("write your first name:");
	scanf("%s",&FirstName);
	printf("write your last name:");
	scanf("%s",&LastName);
	printf("write your age:");
	scanf("%d",&age);
	printf("write your gender:");
	scanf("%s",&Gender);
	printf("write your phone number:");
	scanf("%d",&PhoneNumber);
	printf(" Hello %s %s, your age is %d years old and your phone number is %d",FirstName,LastName,age,Gender,PhoneNumber);
}
