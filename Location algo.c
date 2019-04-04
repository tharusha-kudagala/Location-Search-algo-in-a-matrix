#include <stdio.h>
int main()
{	int a,b;
	printf("Enter the array size : ");
	scanf("%d %d",&a,&b);
	
 int array[a][b];
  
 	for(int x = 0; x < a;x++)
 	{
 		for(int y = 0;y < b;y++)
 		{
 			printf("Enter the value for location[%d][%d] : ",x+1,y+1);
 			scanf("%d",&array[x][y]);
 		}
 	}	
 	
 	int k;
 	printf("Enter value you want to find : ");
 	scanf("%d",&k);
 	
	for(int x = 0; x < a;x++)
	{
	   for(int y = 0 ; y < b;y++)
	   {	if (array[x][y]==k)
	   		{
	   		   printf("\nNumber %d is at Row : %d , Column : %d \n",k,x+1,y+1);
	   		} 
	   }
	}
	
	for(int x = 0;x < a;x++)
	{
	   for(int y = 0;y < b;y++)
	   {
	      printf("%d\t",array[x][y]);
	   } printf("\n");
	}
	

}
