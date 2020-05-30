#include <stdio.h>

main()
{
  int num;

  printf("Insira um numero para ser analizado:");
  scanf("%d",&num);

  switch (num) {
    case 0: printf("ele e 0");
    break;
    case '-': printf("ele e egativo\n");

    default :printf("Ele e positivo\n");
  }

}
