#include <stdio.h>
int main()
{
	float a,b,c;

	printf("donner trois réelles");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if((a>b)&&(a>c))
	{
printf("le maximum est %f",a);




}
	else
		if((b>a)&&(b>c))
			{
		printf("le maximum est %f",b);

	}
		else
				if((c>a)&&(c>b))
					{
				printf("le maximum est %f",c);

			}
								if((a<b)&&(a<c))
									{
								printf("le minimum est %f",a);

							}
								else
														if((b<a)&&(b<c))
															{
														printf("le minimum est %f",b);

													}
														else
																				if((c<b)&&(c<a))
																					{
																				printf("le minimum est %f",c);

																			}



}
