#include "livro.h"

int main(int argc, char const *argv[]) {

  int size, opx;
  int pox;
  char tit[50];

  printf("Entre com Quantidade de livro: ");
  scanf("%d", &size);
  setbuf(stdin, NULL);

  L** livro =  malloc(size * sizeof(L*));

  for(int i=0; i<size;i++)
  {
    printf("\n\tCadastro de %d-Livro\n\n", i+1);
    livro[i] = cria_liv();
    set_livro(livro[i]);
  }

  do
  {
    system("clear");
    printf("1 => Ver Livros Cadastrados\n 2 => Remover Livro\n3 => Buscar Livro\n4 => Deletar e Sair\n\n");
    scanf("%d", &opx);
    setbuf(stdin, NULL);

    switch(opx)
    {
      case 1:
      for(int i=0; i<size;i++)
      {
        printa_liv(livro[i]);
      }
      break;

      case 2:
      for(int i=0;i<size;i++)
      {
        printf("%d - ", i+1);
        listar_tit(livro[i]);
      }
      printf("Entre com numero de livro que deseja remover: ");
      scanf("%d", &pox);
      setbuf(stdin, NULL);
      for(int i=pox-1; i<size;i++)
      {
        livro[i] = livro[i+1];
      }
      printf("\n\t\tRemoxao feita co sucesso\n\n");
      size--;
      break;

      case 3:
      printf("Nome do livro: ");
      scanf("%[^\n]s", tit);
      setbuf(stdin, NULL);
      L* aux;
      for(int i=0; i<size;i++)
      {
        aux = busca(livro[i], tit);
        if(aux != NULL)
        {
          printa_liv(aux);
          break;
        }
      }
        if(aux==NULL)
        {
            printf("Livro nao Encontrado!\n");
        }
      break;

      case 4:
      for(int i=0; i<size;i++)
      {
        deletar(livro[i]);
      }
      free(livro);
      //  exit(1);
      break;

      default:
      printf("Opxao Ivalida\n\n");
    }

    printf("\n\t\tSair s/n ?");
  }while(getchar() != 's');
  return 0;
}
