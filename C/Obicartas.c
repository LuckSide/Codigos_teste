#include "stdio.h"

int main() {

int A,B,C;

scanf("%d %d %d",&A,&B,&C);

if (A == B) {
  printf("%d",C);
} else {
  if (B == C) {
    printf("%d",A);
  }
  else{
    if (A == C) {
      printf("%d",B);
    }
  }
}

}
