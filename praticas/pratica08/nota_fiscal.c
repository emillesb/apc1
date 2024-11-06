#include <stdio.h>

int main() {


float total = 0.0f;
float nota_fiscal[5][3];


for(int i=0; i<5; i++) {
printf("Insira o valor do produto: " );
scanf("%f", &nota_fiscal[i][0]);
while (getchar() != '\n');
printf("Insira a quantia desse produto: " );
scanf("%f", &nota_fiscal[i][1]);
while (getchar() != '\n');
nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
total = total + nota_fiscal[i][2];
}
for(int i=0; i<5; i++) {
for(int j=0; j<2; j++) {
    printf("%.1f \t ", nota_fiscal[i][j]);
}
 printf("\n");
}
printf("%.2f", total);


    return 0;
}