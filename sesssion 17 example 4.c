#include<stdio.h>
#include<string.h>
void main(){
	char name1[15]="Luat";
	char name2[15]="Tien";
	char name3[15]="Linhcho";
	char name4[15]="Nhatlinh";
	
	int i;
	
	system("cls");
	
	i= strcmp(name1, name2);
	printf("%s compared with %s returned %d\n", name1,name2,i );
	i=strcmp(name1, name3);
	printf("%s conpared with %s returned %d\n", name1, name3,i);
	printf("%s compared with %s returned %d\n", name1, name4,i);
	getch();
	
}
