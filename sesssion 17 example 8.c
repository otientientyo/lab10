#include<stdio.h>
#include<string.h>
 int main()
{
	int num[5], ctr, sum = 0;
	int sum_arr(int num_arr[]); /* Funcion declaration	 */
	

	for(ctr = 0; ctr <5; ctr++) /* Aaccepts numbers into array*/
	{
		printf("\n Tenter number %d: ", ctr+1);
		scanf("%d", &num[ctr]);
	}
	sum=sum_arr(num);
	printf("\nThe sum of the arry is %d", sum);
	return 1;
}
int sum_arr(int num_arr[])
{
	int i,total;
	
	for(i=0, total=0; i<5; i++)
		total += num_arr[i];
		
		return total; 
}
