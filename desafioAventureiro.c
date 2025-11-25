#include <stdio.h>
#define linhas 10//definindo tamanho fixo da matriz
#define colunas 10

int main() {
  //criando as tabelas e inserindo navios
  int batalhaNaval[linhas][colunas];//criando a matriz
  int count = 0;
  int countDois = 0;

  printf("Tabuleiro Batalha Naval \n");
  for (int l = 0; l < linhas; l++){
    printf("%d\t", l+1);//imprimindo a numeracao da linha
    for (int c = 0; c < colunas; c++){
      batalhaNaval[l][c] = 0;//definindo 0 para toda matriz l e c
      if(l<=9 && l>=7){
        batalhaNaval[l][6]=3;
      }//definindo localizacao do navio na vertical na coluna 4 alterando de 0 para 3
      if(c<=6 && c>=4){
        batalhaNaval[5][c]=3;
      }//definindo navio na horizontal na linha 2 alterando de 0 para 3
      if(l==c && count < 3){
        batalhaNaval[l][c]= 3;
        count++;
      }
      if(l+c == 9 && countDois < 3){
        batalhaNaval[l][c]= 3;
        countDois++;
      }
      printf("%d\t",batalhaNaval[l][c]);//imprimindo tabela completa com \t que padroniza a matriz
    }
    printf("\n");//organizar verticalmente a tabela
  }
  return 0;//boa pratica para mostrar que sistema rodou direito
}