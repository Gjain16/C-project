#include<stdio.h>
#include<struct.h>
#include<stdlib.h>

void good_type(char type[])
{
	FILE *fp = fopen("goods.txt" , "r")
	struct goods product;

	while(fread(&product, sizeof(struct goods), 1, fp))
	{
		if(product.type == type)
		{
			printf("%s %S %s %f %f %f \n",product.name,product.type,			product.brand,product.rating,product.quality);
		}
	}
	fclose(fp);
}

	
