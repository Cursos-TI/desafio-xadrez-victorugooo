#include <stdio.h>

 int main(){

  // a torre se move 5 casas para a direita
  printf("\nMovimento da torre:\n");
  for(int i = 0; i < 5; i++) {
       printf("direita\n");
  }

  // o bispo se move 5 casas na diagonal para cima e a direita
  printf("\nMovimento do bispo:\n");
  int j = 0;
  while (j < 5){
       printf("cima,direita\n");
     j++;
  }

  //a rainha se move em todas as direcoes
  printf("\nMovimento da rainha:\n");
  int k = 0;
  do {
     printf("esquerda,direita,cima,baixo\n");
     k++;
  } while (k < 8);


return 0;

 }