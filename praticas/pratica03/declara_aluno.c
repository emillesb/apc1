#include <stdio.h>
int main(){

  long int matricula = 2345678;
  short int idade_do_aluno = 29;
  float altura_do_aluno = 1.92;
  
  printf("Matrícula: %08li\n", matricula);
  printf("Idade: %i\n", idade_do_aluno);
  printf("Altura: %1.2f\n", altura_do_aluno);
  
  return 0;
}