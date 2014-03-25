
#include <stdio.h>

int main()
{

int x;
int fib=1;
int i;
int aux=0;

printf("Dame un numero:");
  scanf("%d",&x);

if(x==0){
	printf("0\n");
	}
	
else{
	printf("0\n1\n");

	for (i=1; i<x; i++ )
	{
	fib=fib+aux;
    aux=fib;
	printf ("%d\n",fib );
	}
	
	}
	   	
   return 0;
}