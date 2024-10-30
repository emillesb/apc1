#include <stdio.h>

int main (){
    


int numero = 0;
printf ("Entre com um numero de 1 a 10: ");
int deu_certo = scanf("%i", &numero);

if (numero > 0 && numero < 101){
    printf("Tabuada de %i\n", numero);
    for(int i=0; i<101; i++){
        //printf("%i", i+1); Assim soma de 1+ comecando do 1
        printf("%i x %i = %i\n", i+1, numero, (i+1)*numero); 
    }
    for(int i=101; i>0; i--){
        printf("%i x %i = %i\n", i, numero, i*numero);
    }

}
return 0;

}



