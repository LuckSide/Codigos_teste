#include <stdio.h>
int main()
{
    char opcao;

    do
    {
        printf("\nM E N U   P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tOpcao:");

        scanf("%c",&opcao);

        fflush(stdin); /*limpar buffer do teclado*/

        switch (opcao)
        {
            case 'c':
            case 'C': puts("opc�o clientes");break;
            case 'f':
            case 'F': puts("op��o Fornecedores");break;
            case 'e':
            case 'E': puts("op��o Encomendas"); break;
            case 's':
            case 'S': break;
            default: puts("OPCAO INVALIDA!");
                break;

        }

        getchar();
    }

    while (opcao != 's' || opcao != 'S');
}
