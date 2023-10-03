#include <stdio.h>

int main() {
  printf("Exercicio 1\n");
  printf("--------------------------------\n");

  int boys = 26;
  int girls = 4;
  int total = girls + boys;
  double girls_percentage = ((double) girls) / total;
  double boys_percentage = ((double) boys) / total;
  printf("Girls (N/%%)\t| Boys (N/%%)\n");
  printf("-----------------------------------\n");
  printf("%d (%.2f%%)\t| %d (%.2f%%)\n", girls, girls_percentage*100, boys, boys_percentage*100);
  
  printf("\nExercicio 2\n");
  printf("--------------------------------\n");

  int A = 23;
  int B = 47;
  int C = 30;
  float media = ((float) (A + B + C)) / 3.0;
  printf("media=%f\nA-media=%f\nB-media=%f\nC-media=%f\n", media, A-media, B-media, C-media);
  return 0;
}
