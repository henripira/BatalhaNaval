#include <stdio.h>

int main() {
  //criando as tabelas e inserindo navios
  int batalhaNaval[10][10]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,3,3,3,0,0,0},//navio na horizontal
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,3,0,0,0,0,0,0,0,0},//navio na vertical
    {0,3,0,0,0,0,0,0,0,0},
    {0,3,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
  };
  //mostrando tabela criada com loop aninhado para mostrar as linhas e colunas l para linha e c para coluna
  printf("Tabuleiro Batalha Naval \n");
  for (int l = 0; l < 10; l++){
    for (int c = 0; c < 10; c++){
      printf("%d\t",batalhaNaval[l][c]);
    }
    printf("\n");
  }
  return 0;//boa pratica para mostrar que sistema rodou direito
}