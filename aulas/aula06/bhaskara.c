#include <stdio.h>
#include <math.h>

int main(){

int a = 0;
int b = 0;
int c = 0;

printf("Insira a =");
scanf ("%i", &a);
printf("Insira b =");
scanf ("%i", &b);
printf("Insira c =");
scanf ("%i", &c);

int delta = b*b - 4*a*c;

if (delta < 0){
    printf("A equacao nao tem raiz real");
 } else {
    float x1 = (-b + sqrt(delta)) / 2*a;
    float x2 = (-b - sqrt(delta)) / 2*a;
    printf("As raizes sao x1= %.2f e x2= %.2f:", x1, x2); 
}
 return 0;
}