#include <stdio.h>
int main()
{
	char x;

	printf("donner un caractére");
	scanf("%c",&x);
	if((x<='z')&&(x>='a'))
	{




		printf("le caractére est miniscule ");

}
	else
		if((x<='Z')&&(x>='A'))
			{




				printf("le caractére est majuscule ");

		}
		else
	if((x>='0')&&(x<='9'))
		{




			printf("le caractére est numérique ");

	}
	else
	{
		printf("Autre caractére");
	}

}
