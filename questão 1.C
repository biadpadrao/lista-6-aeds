// Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos. 
// Faça um outro procedimento que receba um vetor preenchido com as notas, calcule a média da turma e
// conte quantos alunos obtiveram nota acima da média. Esse procedimento deve exibir a média e o resultado da contagem

#include <stdio.h>

int n = 10;

// calcula a média das notas da turma
void media(float *vetor) {
  float soma = 0, a = 0, m;
  
  for (int i = 0; i < n; i++)
    soma += vetor[i];
  m = soma/n;
  printf ("\n\nMédia da turma: %.1f", m);
  
  for (int i = 0; i < n; i++) {
    if (vetor[i] > m)
      a++; // conta quantos alunos acima da media
  }
  printf("\n%.0f alunos tiraram acima dessa média", a);
}

int main(void) {
  float vnotas[n], media_notas;
  for (int i = 0; i < n; i++) {
    printf("Digite a nota do %d° aluno: ", i+1);
    scanf("%f", &vnotas[i]);
  }
  media(vnotas);
  return 0;
}
