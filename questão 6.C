// Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma dos elementos abaixo da diagonal principal.
// Mostre na tela os elementos da diagonal principal também. 

#include <stdio.h>

int main(void) { 
  int m = 4;
  float M[4][4], soma = 0;
  for (int l=0; l < m; l++) {
    for (int c=0; c < m; c++) {
      M[l][c] = rand()%16;
      printf("%.0f ", M[l][c]);
    }
    printf("\n");
  }
  
  printf("\nElementos da diagonal principal: ");
  for (int l=0; l < m; l++) {
    for (int c=0; c < m; c++) {
      if (l==c)
        printf ("%.0f ", M[l][c]);
    }
  }

  for (int l=0; l < m; l++) {
    for (int c=0; c < m; c++) {
      if (l>c)
        soma+= M[l][c];
    }
  }
  printf("\nSoma dos elementos abaixo da diagonal: %.0f\n", soma);
  return 0;
}
