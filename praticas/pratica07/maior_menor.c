#include <stdio.h>

int main (){
    

int numero = 0;
int maior = 0;
int menor = 0;

printf("Entre com um numero diferente de 0: ");
int deu_certo = scanf("%i", &numero);
 maior = numero;
 menor = numero;

while(numero != 0) {
 printf("Entre com outro numero: ");
 scanf("%i", &numero);
while (getchar() != '\n');
  
if (numero!=0 && numero > maior) {
    printf("%i eh maior que %i\n", numero, maior);
   maior = numero;

   
}
if (numero!=0 && numero < menor) {
   printf("%i eh menor que %i\n", numero, menor);
   menor = numero;

}


}

printf("%i eh o maior e %i eh o menor",maior, menor);

return 0;
}
