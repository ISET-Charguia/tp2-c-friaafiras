#include <stdio.h>
int main()
{
	int x;

	printf("donner l'année");
	scanf("%d",&x);
	if((x%4==0)&&(x%100!=0))
	{
		printf("L'année est bisextile");

}
	else
		if(x%400==0)
	{
		printf("L'année est bissextile");
	}
		else
		{
			printf("L'année n'est pas bissextile");
		}



}
