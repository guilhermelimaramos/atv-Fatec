#include <stdio.h>
#include <math.h>

int main(void) {

  int tabuada = 0, resp;
  
  do 
  { 
    printf("Escolha um número para fazer a tabuada: \n");
    scanf("%d", &tabuada);

    for (int i = 0;i<=10;++i) {
      printf("%2d x %2d = %3d \n", tabuada, i, tabuada * i);

      }
    printf("Deseja continuar? \n");
    printf("(1)Sim \n");
    printf("(2)Não \n");
    scanf("%d\n\n", &resp);   
    
  }while(resp==1);

  
  
  return 0;
  }