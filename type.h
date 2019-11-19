#include<struct.h>
#include<stdio.h>
#include<stdlib.h>
void type()
{
	FILE *fp = fopen("goods.txt","r");
	struct goods product;
	char prod[][100];
	int i=0;
	while(fread(&product, sizeof(struct goods), 1, fp))
	{
		

	}
	
	fclose(fp);
}	



