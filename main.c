#include <stdio.h>
#include <stdlib.h>

void move(int n, char* orig,char* temp,char* dest)
{
	if (n==1) 
		printf("Mova o disco 1 da haste \33[0;31m %s \33[0m para a haste \33[0;32m %s \33[0m \n",orig, dest);
	else{
		move(n-1,orig,dest,temp);
		printf("Mova o disco %d da haste \33[0;31m %s \33[0m para a haste \33[0;32m  %s \33[0m \n", n, orig, dest);
		move(n-1,temp,orig,dest);
	}
}

int main()
{
	int qtd=0;
	puts("Quantidade de peças:");
	scanf("%d",&qtd);
	
	move(qtd,"Origem","Temporaria","Destino");
	
	return 0;	
}