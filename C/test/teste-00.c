#include <stdio.h>
int main(){
	
	int numero;
	printf("Insira o número para gerar o  quadrado:  ");
	scanf("%d",&numero);
	// coluna inicia com 1 e equanto coluna 
    // for menor ou igual ao numero add mais 1 *
	for(int coluna = 1; coluna <= numero; coluna++){		
		printf("*"); 
	}
	printf("\n"); // pula linha
    //linha inicia no 2 pq o 1 já foi escrito na coluna 
    //e enquanto linha for menor que o numero add + 1 *
	for(int linha = 2; linha < numero; linha++){			
			printf("*");  
    // e add mais * nas colunas
	 	for(int coluna = 2; coluna < numero; coluna++){
			printf(" ");
		}	
		printf("* \n"); // no final pula linha, mas falta uma ultima linha
	}
    // faz a ultima linha com * igual o q faz a primeira
    for(int ultimalinha = 1; ultimalinha <= numero; ultimalinha++){		
		printf("*"); 	
	}
	return 0;
}