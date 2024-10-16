#include <stdio.h>

int main (){

int operacao = 0;

printf ("Seja bem vindo(a) a calculadora. As opcoes sao 1 = soma, 2 = subtracao, 3 = divisao e 4 = multiplicacao.\n");
printf("Agora, digite o numero da operacao desejada:");

scanf("%i", &operacao);

float numero1 = 0.0;
float numero2 = 0.0;
float resultado;

printf("Agora insira aqui o primeiro numero:");
scanf("%f", &numero1);
printf("Agora insira aqui o segundo numero:");
scanf("%f", &numero2);




if(operacao == 1){
    resultado = numero1 + numero2;
    printf("O resultado da soma eh :%.2f\n", resultado);
} else if ( operacao == 2 ){
    resultado = numero1 - numero2;
    printf("O resultado da subtracao eh :%.2f\n", resultado);
} else if ( operacao == 3 ){
    resultado = numero1 / numero2;
    printf("O resultado da divisao eh:%.2f\n", resultado);
} else if ( operacao == 4 ){
    resultado = numero1 * numero2;
    printf("O resultado da multiplicacao eh:%.2f\n", resultado);
}
return 0;
}