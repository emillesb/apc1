#include <stdio.h>

int main() {
  char tecla = '\0'; //caractere eh sempre em aspas simples '', \0 eh caractere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf ("%c", &tecla);
   getchar();
  printf("Você digitou %c\n", tecla);


  printf("Digite outra tecla: ");
  deu_certo = scanf ("%c", &tecla);
  getchar();
  printf("Você digitou %c\n", tecla);

  // com caracteres da problema de buffer do teclado, tem que contornar com getchar
  // na forma printf("Digite uma tecla: ");
  // int deu_certo = scanf ("%c", &tecla);
  // getchar();
  // printf("Você digitou %c\n", tecla); so vai ler um caracttere por vez, tem que adicionar matriz como visto abaixo

  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);
  
  //em string %s eh o unico caso que nao se usa o & comercial em scanf
  //pro programa ler o espaço tem que colocar [^\n] no scanf

  
  return 0;
}
