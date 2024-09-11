#include <stdio.h>
int main() {
//Entrada
  int numero1;
  int numero2;

  printf("Entre com um numero: ");
  int deu_numero = scanf("%i", &numero1);

  printf("Entre com outro numero: ");
  deu_numero = scanf("%i", &numero2);
  
  //Processamento
  int igual = numero1 == numero2;
  int diferente = numero1 !=numero2;
  int menor = numero1 < numero2;
  int menor_igual = numero1 <= numero2;
  int maior = numero1 > numero2;
  int maior_igual = numero1 >= numero2;

  //Saída
    printf("%i é igual %i? %i\n", numero1, numero2, igual);
    printf("%i é diferente %i? %i\n", numero1, numero2, diferente);
    printf("%i é menor que %i? %i\n", numero1, numero2, menor);
    printf("%i é menor ou igual %i? %i\n", numero1, numero2, menor_igual);
    printf("%i é maior que %i? %i\n", numero1, numero2, maior);
    printf("%i é maior ou igual %i? %i\n", numero1, numero2, maior_igual);
  
  //lembra que 0=falso e 1=verdadeiro
  return 0;
}