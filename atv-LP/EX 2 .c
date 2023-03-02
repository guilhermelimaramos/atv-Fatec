#include <stdio.h>
#include <math.h>

int main(void) {

 float  n1, n2, n3,media;  
 
 printf("Digite o primeiro valor: \n");  
 scanf("%f",&n1); 
 
 printf("\nDigite o segundo valor: \n");  
 scanf("%f",&n2); 
 
 printf("\nDigite o terceiro valor: \n");  
 scanf("%f",&n3); media=(n1+n2+n3)/3;  
 
 printf("\nA Média é: %f\n",media);  
 
 if   ( media>=6)   {   
   printf("O Aluno foi aprovado!\n"); }   
   else{ 
     if   ( media<3)   
        
       printf("O Aluno foi reprovado!\n"); 
        
        } 
          
          if   ( (media>=3) && (media<6))    
             
            printf("O Aluno está em exame!\n");    
            }  