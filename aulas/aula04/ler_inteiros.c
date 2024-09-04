#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre um numero: ");
  int deu_certo = scanf("%i", &numero); //colocar o i comercial & sempre em scanf e nao colocar /n
  //esse deu_certo eh pra checar se funcionou, 1 = deu certo 0 = nao deu

  printf ("Você digitou: %i\n", numero);
  printf ("A leitura deu certo? %i\n", deu_certo);

  int coord_x = 0; 
  int coord_y = 0;
  // eh melhor colocar separado pq msm podendo colocar junto fica mais claro separado

  printf("Entre com as coordenadas do ponto: ");
    deu_certo = scanf("%i %i", &coord_x, &coord_y);

  
  printf ("Você digitou: %i %i\n", coord_x, coord_y);
  printf ("A leitura deu certo? %i\n", deu_certo);
  return 0;

}