#include <stdio.h>
int main()
{
	float x,n;
	printf("donner un réel");
	scanf("%f",&x);
	if(x<0)
	{
		n=x*-1;
		printf("La valeur absolue de %f est %f",x,n);

}
	else
	{
		printf("La valeur absolue de %f est %f",x,x);
	}



}
