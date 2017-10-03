#include <stdio.h>
int main()
{
	int x;
	float mont ;

	printf("donner l'année et le montant");
	scanf("%d",&x);
	scanf("%f",&mont);

	if(x<=1)
	{



		printf("Le montant d'intérêt est %f",((0.095*mont)+0.095));

}
	else
			if(x<=3)
				{

				printf("Le montant d'intérêt est %f",((0.085*mont)+0.085));

			}
			else
						if(x<=5)
							{

							printf("Le montant d'intérêt est %f",((0.065*mont)+0.065));

						}
						else
												if(x>5)

													{

													printf("Le montant d'intérêt est %f",((0.058*mont)+0.058));

												}


}
