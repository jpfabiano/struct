#include <stdio.h>
#include<string.h>

struct jogador{
char nome[50];
int idade;
char posicao[50];
};
typedef struct jogador jogador;
int main(void) {
  jogador lista[11];
  int x;
  for (x=0;x<11;x++){
    printf("\nNome : ");
    gets(lista[x].nome);
    printf("Idade : ");
    scanf(" %d",&lista[x].idade);
    setbuf(stdin,NULL);
    printf("Posição : ");
    gets(lista[x].posicao);
    fflush(stdin);
  }
  printf("\nDados dos jogadores: ");
  for(x=0;x<11;x++){
    printf("\n----------Jogador %d----------",x+1);
    printf("\nNome : %s",lista[x].nome);
    printf("\nIdade : %d",lista[x].idade);
    printf("\nPosição : %s",lista[x].posicao);
  }
  return 0;
}
