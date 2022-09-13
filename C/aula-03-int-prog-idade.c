#include <stdio.h>

int main() {

    // variável de tipo inteiro
    int minhaIdade;
    minhaIdade = 35;

    int esposaIdade;
    esposaIdade =26;

    // outra forma de declarar
    int filhaIdade = 0;

    // %i = referencia que receberá uma variável do tipo int
    printf("Minha idade é %i.\nIdade da minha esposa é %i\nIdade da minha filha é %i\n", 
        minhaIdade, esposaIdade, filhaIdade
    );


    return 0;
}