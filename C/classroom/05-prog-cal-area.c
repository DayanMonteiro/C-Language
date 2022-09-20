#include <stdio.h>

int main() 
{
    int base;
    int altura;
    int area;

    // é como console log do javascript
    printf("Digite o valor da base:");
    // coloca o que o usuário digitar dentro do programa
    // usa & para atribuir a variável
    scanf("%i", &base);

    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area =  base * altura;

    printf("O valor da area do retangulo é = %i\n", area);

    return 0;
}