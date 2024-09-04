#include <stdio.h>

int main() {

  long int matricula = 0;
  float a1 = 0;
  float a2 = 0;
  float media = 0;

  printf ("Digite sua matrícula: ");
  int deu_certo = scanf ("%li", &matricula);
  printf ("Digite sua A1: ");
  
  deu_certo = scanf ("%f", &a1);
  
  printf ("Digite sua A2: ");
  deu_certo = scanf ("%f", &a2);
  printf ("Digite sua media: ");
  scanf ("%f", &media);
  printf("%s\n", "Matricula   A1   A2     Media");
  printf("%li\t%3.1f\t%4.1f\t%0.1f\n", matricula, a1, a2, media);
  
  


  
  return 0;
}
