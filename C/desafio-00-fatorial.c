/*
crie um sistema que calcule o fatorial de um número inserido pelo usuário
*/

#include <stdio.h>

int main()
{
    int fatorial;
    int numero;

    printf("Digite um numero para calcular o seu fatorial: ");
    // para capturar o numero no qual será calculado o fatorial
    scanf("%d", &numero);

    // a cada nova iteração diminui 1 do numero digitado ate ele ser igual a 1
    for(fatorial = 1; numero > 1; numero = numero - 1) {
    // fatorial multiplica cada iteração pelo resultado anterior
        fatorial = fatorial * numero;
    };

    printf("\nFatorial igual a: %d\n", fatorial);
    return 0;
}