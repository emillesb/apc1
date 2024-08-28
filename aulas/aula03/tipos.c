#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
  printf("tamanho do char na memoria = %lu byte(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
  printf("tamanho do double na memoria = %lu byte(s)\n", sizeof(double));
  printf("tamanho do void na memoria = %lu byte(s)\n", sizeof(void));
  // pra cada tipo tem um tamanho na memoria
  printf("\n");
  printf ("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf ("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf ("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
  //o E significa exponencial, troque ele pelo f em %E do float acima e veja a diferenca
  printf ("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla = 'A';
  printf("valor de tecla: %c\n", tecla);
  int idade = 25;
  printf("valor de idade; %i\n", idade);
  float nota = 8.6f; //6 casas decimais
  printf("valor de nota: %f\n", nota);
  double pi = 3.14156293; //12 casas decimais
  printf("valor de pi; %.10f\n", pi);
  idade = 50;
  printf("valor de idade; %i\n", idade);
  const float PI = 3.14f;
  printf("valor da constante PI = %f\n", PI);
  //PI = 3.14156f; vai dar ruim!!!! 
  // variavel eh mudavel, constante NAO!
  printf("\n");
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do double na memoria = %lu byte(s)\n", sizeof(long double));
  //os unicos que tem como mexer no tamanho sao o int e o double
  // int pode ir de 2 a 8 e double pode ir pra 16
  printf("\n");
  printf("a faixa de valores do short int: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int: de %li ate %li\n", LONG_MIN, LONG_MAX);
  //o l e L(acima e abaixo respectivamente) significa long
  printf("a faixa de valores de long double: de %LE ate %LE\n", LDBL_MIN, LDBL_MAX);
  return 0;
}