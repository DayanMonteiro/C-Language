/*
crie um sistema que calcule o fatorial de um número inserido pelo usuário
RESPOSTA DO CURSO
*/

#include <stdio.h>

int main()
{
    int fatorial = 5;
    int resposta = 1;

    for( ; fatorial >= 1; fatorial--) {
        resposta = resposta * fatorial;
    }

    printf("\nO número fatorial é: %i\n", resposta);
    return 0;
}