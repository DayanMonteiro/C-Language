#include <stdio.h>
int main(){
	
	int numero;
	printf("Insira o número para gerar o  quadrado:  ");
	scanf("%d",&numero);

    for(int contador = 0; contador < numero; contador++){
        for(int coluna = 0; coluna < numero; coluna++){		
		    printf("*"); 
	    }
	    printf("\n");
    }

	return 0;
}

/*
const contador = 0;

while(contador < 5) {
  // Faz alguma coisa 
  contador++;
}

equivalente:
for(int contador = 0; contador < 5; contador++) {
  // Faz alguma coisa 
}


Percorrer vetor:
for(int posicao = 0; posicao < TAMANHO_DO_ARRAY; posicao++) {
  // printf("%d", array[posicao])
}

Percorrer matriz:
for(int linha = 0; linha < TOTAL_LINHAS; linha++) {
  for(int coluna = 0; coluna < TOTAL_COLUNAS; coluna++) {
    // printf("%d", matriz[linha][coluna]);
  }

  printf("\n");
}


*/