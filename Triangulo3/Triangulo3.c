#include <stdio.h>

int main()
{
 int x; 
 int i;
 int j;
 int k;
 
 printf("Dame un numero:");
  scanf("%d",&x); 

   for ( i=1; i<=x; i++ )
   {     
                       
   for ( j=1; j<i ; j++ )
   printf(" ");

   for ( k=i; k<=x; k++)
   printf("*");
  
   printf("\n");
	   
   }

  return 0;
}
