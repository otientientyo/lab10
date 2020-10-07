#include<stdio.h>
void main(){
	char name[20];
	/* name is declared as a single dimensional character arry*/
	system("cls"); /*Clears the screen */
	puts("Enter your name: "); /*Displays a nessage */
	gets(name); /* Accepts the input */
	puts("Hi there: ");
	puts(name); /* Displays the input */	
	getch();
}
