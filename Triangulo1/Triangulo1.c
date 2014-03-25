
#include <stdio.h>

int main()
{

 int x; 
 int i;
 int j;
 
 printf("Dame un numero:");
  scanf("%d",&x); 

   for(i=0;i<x;i++)
	{
       for(j=0;j<=i;j++)
		{
   			printf("*");
   		}             
	   printf("\n");          
  }

 return 0;
}
