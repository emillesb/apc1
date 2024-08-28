#include <stdio.h>
int main(){

  long int matricula = 2345678;
  short int idade_do_aluno = 29;
  float altura_do_aluno = 1.92;
  double peso_do_aluno = 89.00;
  char sexo_do_aluno = 'M';
  
  printf("Matrícula: %08li\n", matricula);
  printf("Idade: %i\n", idade_do_aluno);
  printf("Altura: %1.2f\n", altura_do_aluno);
  printf("Peso: %0.2f Kg\n", peso_do_aluno);
  printf("Sexo: %c\n", sexo_do_aluno);
  
  return 0;
}