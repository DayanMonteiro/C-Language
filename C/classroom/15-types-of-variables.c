#include <stdio.h>

int main() 
{
 
  char variavelChar = 'a';
  printf("%c\n", variavelChar);
  scanf("%c", &variavelChar);
  printf("%c\n", variavelChar);

  bool variavelBool = false;
  printf("%i\n", variavelBool);
  
  int variavelInt = 14;
  printf("%i\n", variavelInt);
  scanf("%i\n", variavelInt);
  printf("%i\n", variavelInt);

  long int variavelInt = 14545645464440;
  printf("%i\n", variavelInt);
  scanf("%i\n", variavelInt);
  printf("%i\n", variavelInt);

  const int variavelInt = 10;
  printf("%i\n", variavelInt);
  
  float variavelFloat = 10.10;
  printf("%f\n", variavelFloat);
  scanf("%f\n", variavelFloat);
  printf("%f\n", variavelFloat);
  
  double variavelDouble = 10.10;
  printf("%f\n", variavelDouble);
  scanf("%lf\n", variavelDouble);
  printf("%f\n", variavelDouble);

  const double variavelDouble = 10.10;
  printf("%f\n", variavelDouble);
  scanf("%lf\n", variavelDouble);
  printf("%f\n", variavelDouble);

  // unsigned obriga a receber apenas valores positivos
  unsigned double variavelDouble = 10.10;
  printf("%f\n", variavelDouble);
  scanf("%lf\n", variavelDouble);
  printf("%f\n", variavelDouble);

  return 0;
}