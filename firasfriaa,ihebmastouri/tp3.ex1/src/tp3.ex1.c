#include <stdio.h>
int main()
{
	int n;
	printf("donner un entier");
	scanf("%d",&n);
	if (n%3==0)
	{
		printf("%d  est divisible par 3",n);
	}
	else
	{
		printf("%d  n'est pas divisible par 3",n);
	}
}
