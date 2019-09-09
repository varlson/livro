#include "livro.h"

struct l
{
  char nome[50];
  char autor[50];
  char gen[50];
  char ano[5];
};

L* cria_liv()
{
  L* l = malloc(sizeof(L));
  return l;
}

void set_livro(L* l)
{
  printf("Nome do Livro: ");
  scanf("%[^\n]s", l->nome);
  setbuf(stdin, NULL);

  printf("Autor do Livro: ");
  scanf("%[^\n]s", l->autor);
  setbuf(stdin, NULL);

  printf("Genero do Livro: ");
  scanf("%[^\n]s", l->gen);
  setbuf(stdin, NULL);

  printf("Ano do Livro: ");
  scanf("%[^\n]s", l->ano);
  setbuf(stdin, NULL);
}
void deletar(L* l)
{
  free(l);
}
void printa_liv(L* l)
{
  printf("Nome %s\nAutor: %s\nGenero: %s\nAno: %s\n\n", l->nome, l->autor, l->gen, l->ano);
}
void listar_tit(L* l)
{
    printf(" %s\n\n", l->nome);
}

L* busca(L* l, char tit[])
{
  if(strncmp(tit, l->nome, strlen(tit)))
  {
    return NULL;
  }else
    return l;
}
