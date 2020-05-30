#include "stdio.h"

main()
{

int dia, mes, ano;
printf("Escrava uma data.\n");
printf("Qual é o dia?\n");
scanf("%d",&dia );
printf("Qual é o mês?\n");
scanf("%d",&mes);
printf("E o ano?\n");
scanf("%d",&ano );
printf("Essa tata é escrita dessa forma no padrão dd-mm-aaaa: %d / %d / %d",dia, mes, ano);
}
