// Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma função que receba um vetor preenchido,
// teste e copie todos os valores negativos deste vetor para um novo vetor (sem deixar elementos vazios entre os valores copiados),
// retornando este vetor como resultado. Faça um procedimento que recebe e exibe o conteúdo de um vetor. 

#include <stdio.h>

int n = 10;

// pegar os numeros negativos 
void recebe(int n, float vetor[n]) {
  int neg = 0, x = 0;
  for (int i = 0; i < n; i++) {
    if (vetor[i] < 0)
      neg++;
  }
  printf("\nneg: %d\n", neg); // quantidade de negativos
  float vneg[neg];
  for (int i = 0; i < n; i++) {
    if (vetor[i] < 0) {
      vneg[x++] = vetor[i];
      printf("%.0f ", vneg[x - 1]);
    }
  }
}

int main(void) {
  float v[n];
  printf("Digite 10 números: \n");
  for (int i = 0; i < n; i++) {
    scanf("%f", &v[i]);
  }
  recebe(n, v);
  return 0;
}
