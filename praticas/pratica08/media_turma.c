#include <stdio.h>

int main() {


float notas[10];
float soma = 0.0f;
float media = 0.0f;
int qtde_acima_media = 0;

for(int i=0; i<10; i++){
 printf("insira a nota: ");
 int deu_certo = scanf("%i", &notas[i]);
soma = soma + notas[i];
}

media = soma / 10;
for(int i=0; i<10; i++){
  if(notas[i]>media){
qtde_acima_media = qtde_acima_media + 1;
  
}
}
 printf("media: %.2f", media);
 printf("%i quantidade de notas acima da media", qtde_acima_media);

    return 0;
}