#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

int pos_hash(int chave, int tamanho);

void inicializa_tabela(Cliente* Hash[], int tamanho);

void insere_cliente(Cliente* cli, Cliente* Hash[], int tamanho, FILE *out, FILE *outHash);

Cliente* buscar_cliente(Cliente* Hash[], int codigo, int tamanho);

void remover_cliente(Cliente* Hash[], int codigo, int tamanho);

void libera_tabela(Cliente* Hash[], int tamanho);

void imprimir_tabela(Cliente* Hash[], int tamanho);

void salvar_hash(int posicao, FILE *out);

void sobrescreve_hash_no_arquivo(FILE *out, int posicaoHash, int posicao);

#endif