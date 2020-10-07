#include<stdio.h>
#include<string.h>
void main(){
	char str1[15]= "New york";
	char str2[15]= "Washington";
	char chr='a', *loc;
	
	system("cls");
	loc = strchr(str1, chr);
	
		if(loc!=NULL)
			printf("%c occurs in %s\n", chr, str2);
		else
			printf("%c does not occur in %s\n", chr, str2);
		getch();
		
}
