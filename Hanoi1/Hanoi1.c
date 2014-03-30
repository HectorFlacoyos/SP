#include <stdio.h>

int main() {
int n;
		
printf("Cuantos discos:");
scanf("%d",&n);
	
hanoi(n,"A","B","C");
return 0;
}

int hanoi(n,orig,aux,dest) {
if (n == 0){
return 0;
}

else{
hanoi(n-1,orig,dest,aux);
printf("Disco %d de %s a %s\n",n,orig,dest);
hanoi(n-1, aux,orig,dest);
}

return 0;
}