#include <stdio.h>
#include <time.h>

int m = 4, n = 6;

void preenche(float V[m][n]) {
  for (int l = 0; l < m; l++) {
    for (int c = 0; c < n; c++) {
      V[l][c] = rand() % 25;
      printf("%.0f ", V[l][c]);
    }
    printf("\n");
  }
}

// matriz S que seja a soma de A e B
void matrizS(float A[m][n], float B[m][n], float S[m][n]) { 
  for (int l = 0; l < m; l++) {
    for (int c = 0; c < n; c++) {
      S[l][c] = A[l][c] + B[l][c];
      printf("%.0f ", S[l][c]);
    }
    printf("\n");
  }
}

// matriz D que seja a diferença de A e B
void matrizD(float A[m][n], float B[m][n], float D[m][n]) { 
  for (int l = 0; l < m; l++) {
    for (int c = 0; c < n; c++) {
      D[l][c] = A[l][c] - B[l][c];
      printf("%.0f ", D[l][c]);
    }
  printf("\n");
  }
}

int main(void) {
  float A[m][n], B[m][n], C[m][n], D[m][n];
  srand(time(0));
  printf("Matriz A:\n");
  preenche(A);
  printf("\nMatriz B:\n");
  preenche(B);
  printf("\nMatriz S:\n");
  matrizS(A, B, C);
  printf("\nMatriz D:\n");
  matrizD(A, B, D);
  return 0;
}
