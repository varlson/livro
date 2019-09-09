#ifndef LIVRO_H
#define LIVRO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct l L;

L* cria_liv();
void set_livro(L* l);
void deletar(L* l);
void printa_liv(L* l);
void listar_tit(L* l);
L* busca(L* l, char tit[]);

#endif
