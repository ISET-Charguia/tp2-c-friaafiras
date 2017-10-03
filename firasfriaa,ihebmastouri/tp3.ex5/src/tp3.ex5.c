#include <stdio.h>
int main()
{
	int x;

	printf("donner un entier");
	scanf("%d",&x);
	if((x<1000)&&(x>99))
	{




		printf("le nombre de centaine est : %d le nombre de dizaine est : %d le nombre de unité est : %d",(x/100),((x/10)%10),(x%10));

}
	else

	{
		printf("Erreur saisir un entier composé de trois chiffres");
	}




}
