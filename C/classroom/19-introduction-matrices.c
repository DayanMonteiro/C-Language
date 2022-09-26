#include <stdio.h>

int main(void) 
{

  int matriz[3] [3] = {
    // linha 1 e suas colunas
    {1, 2, 3},
    // linha 2
    {4, 5, 6},
    // linha 3
    {7, 8, 9}
  };

  // a mesma matriz porém em um único obj
    int matriz2[3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// imprime o valor da linha 1 valor 1
  printf("%i", matriz[0][0]);
// imprime o valor da linha 1 valor 2
  printf("%i", matriz[0][1]);
// imprime o valor da linha 1 valor 3
  printf("%i\n", matriz[0][2]);

  return 0;

}