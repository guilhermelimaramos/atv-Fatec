#include<stdio.h>
#include <math.h>

int main()
{
int a,b,c,x1,x2,delta;

      printf("Digite o valor de A: \n");
      scanf("%d",&a);
      
      printf("\nDigite o valor de B: \n");
      scanf("%d",&b);
      
      printf("\nDigite o valor de C: \n");
      scanf("%d",&c);


         delta=b*b-4*a*c;

         printf("\nO resultado do Delta é: %d\n",delta);


             if (delta>0)
             {
      x1 = ((-b) + sqrt(delta))/(2*(a));
      x2 = ((-b) - sqrt(delta))/(2*(a));

    

      printf("O resultado da equação é: \nX1:%d e X2:%d",x1,x2);   
             

         }
             else



     printf("\nNão é possível extrair a raiz deste numero\n\n");

    
    }