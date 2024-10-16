#include <stdio.h>
int main(){

int temperatura = 0.0;

printf("Insira a temperatura atual:");
scanf("%i", &temperatura);


if(temperatura > 40.0){
    printf("Aqui parece um forno!\n");
} else if (temperatura >= 30.0 && temperatura <= 39.9){
    printf("Aqui esta quente!\n");
    } else if (temperatura >= 20.0 && temperatura <= 29.9){
    printf("Aqui esta bem agradavel!\n");
    } else if (temperatura >= 10.0 && temperatura <= 19.9){
    printf("Aqui esta friiio!\n");
     } else if (temperatura < 9.9){
    printf("Aqui esta congelando!\n");

}





return 0; 
}