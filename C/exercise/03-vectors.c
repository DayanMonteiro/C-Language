/*
Crie um programa que pede que o usuário digite 4 notas de 0 a 10 (tipo float)
de 4 alunos e os valores deverão ser armazenados em uma matriz bidimensional.
Faça a média das notas de cada aluno e armazene as 4 médias em um vetor.
Por ultimo, coloque na tela do usuário uma mensagem informando a média de cada aluno.
*/

#include <stdio.h>

int main(void) 
{
  const int bimestresAnuais = 4;
  const int numeroDeAlunos = 4;


  float notasAlunos[4][4] = {0};
  float mediasAlunos[4] = {0};

  // em compiladores mais modernos
  // float notasAlunos[numeroDeAlunos][bimestresAnuais] = {0};
  // float mediasAlunos[numeroDeAlunos] = {0};

  float media = 0;

  printf("Insira as 4 notas do aluno 1:\n");

   for(int aluno = 0; aluno < numeroDeAlunos; aluno++) {
      for(int notas = 0; notas < bimestresAnuais; notas++) {
        scanf("%f", &notasAlunos[aluno][notas]);
        // soma as 4 notas
        media += notasAlunos[aluno][notas];
      }

      mediasAlunos[aluno] = media / bimestresAnuais;
      /* reseta a variável média para quando entrar novamente no for 
      o valor inicial n seja o valor da média resolvida acima */
      media = 0;
      // automatiza o numero do aluno
      printf("Insira as 4 notas do aluno %i:\n", aluno + 2);
    }

    for(int aluno = 0; aluno < numeroDeAlunos; aluno++){
      printf("A média do aluno %i é %.2f\n", aluno +1, mediasAlunos [aluno]);
    }

  return 0;

}