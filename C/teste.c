#include <stdio.h>

main()
{
    short int idade;

    int montante;

    long int n_conta;

    printf("qual é a idade:" ); scanf("%hd", &idade);

   	printf("qual o mantante a depositar:" ); scanf("%d", &montante);
   	printf(" qual o numero da conta:"); scanf("%ld",&n_conta);
   	printf("uma pessoa de %hd anos depositou $%d na conta %ld \n ", idade, montante,n_conta);
}