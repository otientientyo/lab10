#include<stdio.h>
#include<string.h>
void main(){
	char hotelname1[15]= "Sea View";
	char hotelname2[15]="Sea Breeze";
	
	system("cls");
	
	printf("The old name is %s\n", hotelname1);
	
	strcpy(hotelname1,hotelname2); /* change the  hotel name*/
	printf("The new name is %s\n", hotelname1); /*Display the newname*/
	
	getch();
}
