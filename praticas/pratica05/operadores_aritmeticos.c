#include <stdio.h>

int main() {
  int numero1=0
  int numero2=0
  float numero3=3
  printf("Digite um número inteiro: ");
  scanf("%i", &numero1);
  printf("Digite outro número inteiro: ");
  scanf("%i", &numero2);
  printf("Digite um número flutuante: ");
  scanf("%f", &numero3);

  int soma = numero1 + numero2;
  
  return 0;
}

