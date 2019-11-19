#include<stdio.h>
#include<struct.h>
#include<stdlib.h>
void max_rating()
{
	FILE *fp = fopen("goods.txt","r");
	struct goods product;
	max_rating=0;
	while(fread(&product,sizeof(struct goods),1,fp)
	{
		if(max_rating<product.rating)
		{
		max_rating = product.rating;
		}
	}
	while(fread(&product,sizeof(struct goods),1,fp)
	{

		if(max_rating=product.rating)
		{
			printf("%s %s %s %f %f %f ",product.name,product.type.product.brand,product.cost, product.rating, product.quality);
		}
	}
	fclose(fp);
}



