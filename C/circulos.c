#include <stdio.h>

main()
{

float raio , perimetro;

double pi = 3.1315927, area;

	printf("introduza o raio da circuferência:");

	scanf("%f", &raio);
	area = pi * raio * raio;
	perimetro = 2 * pi * raio;


	printf("Area= %f \nPerimetro =%f\n", area, perimetro);





}