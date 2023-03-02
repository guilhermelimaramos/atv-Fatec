#include <stdio.h>
#include <math.h>

int main(void) {

    int a, b, c;

    printf("Digite o 1º lado:\n");
    scanf("%d", &a);

    printf ("\nDigite o 2º lado:\n");
    scanf("%d", &b);

    printf ("\nDigite o 3º lado:\n");
    scanf ("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        
      printf("É um Triangulo\n");
        
        if(a == b && a == c && b == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isósceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Não é um trinagulo!\n");
} 