#include<stdio.h>
#include<string.h>

main(){
	char firstname[15];
	char lastname[15];
	system("cls");
	
	printf("Enter your first name:  ");
	scanf("%s", firstname);
	
	printf("Enter your last name:  ");
	scanf("%s", lastname);
	
	strcat(firstname, lastname);
	
	printf("%s", firstname);
	getch();
}
