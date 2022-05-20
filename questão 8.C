// Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros procedimentos
// que recebam uma matriz preenchida, realize as trocas indicadas a seguir e exiba a matriz resultante da troca:
// a) a linha 2 com a linha 8
// b) a coluna 4 com a coluna 10
// c) a diagonal principal com a diagonal secundária
// d) a linha 5 com a coluna 10. 

#include <stdio.h>
#include <time.h>

int m = 10, temp = 0;

// preenche matriz M(10,10) e a escreve 
void preenche (float V[m][m]) {
  for (int l = 0; l < m; l++) {
    for (int c = 0; c < m; c++) {
      V[l][c] = rand( ) % 10;
      printf("%.0f ", V[l][c]);
    }
    printf("\n");
  }
}

// A) trocar linha 2 com a 8
void letraA (float V[m][m]) {
  for (int i = 0; i < m; i++) {
    temp = V[1][i];
    V[1][i] = V[7][i];
    V[7][i] = temp;
  }
}

// B) trocar coluna 4 com a 10  
void letraB (float V[m][m]) {
   for (int i = 0; i < m; i++) {
    temp = V[i][3];
    V[i][3] = V[i][9];
    V[i][9] = temp;
  }
}

// C) trocar diagonal principal com a secundária  
void letraC (float V[m][m]) {
  float D[10];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if ((i+j) == 9 || i == j) {
        D[i] = V[i][i];
        V[i][i] = V[i][j];
        V[i][j] = D[i];
      }
    }
  }
}

// D) trocar a linha 5 com a coluna 10
void letraD (float V[m][m]) {
  for (int i = 0; i < m; i++) {
    temp = V[4][i];
    V[4][i] = V[i][9];
    V[i][9] = temp;
  }
}

int main(void) {
  float M[m][m];
  srand (time(0));
  printf ("Primeira matriz: \n");
  preenche (M);
  printf ("\nNova matriz após trocas: \n");
  letraA (M);
  letraB (M);
  letraC (M);
  letraD (M);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++){
      printf ("%0.f ", M[i][j]);
    }  
    printf("\n");
  }
  return 0;
}
