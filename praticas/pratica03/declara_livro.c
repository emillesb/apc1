#include <stdio.h>
int main(){

  long int ISBN = 234567898765;
  short int numero_de_paginas = 898;
  float preco_do_livro = 59.90;
  int ano_do_livro = 2014;

  printf("ISBN: %013li\n", ISBN);
  printf("Número de Páginas: %i\n", numero_de_paginas);
  printf("Preco:R$ %2.2f\n", preco_do_livro);
  printf ("Publicado em: %i\n", ano_do_livro);
  return 0;
}