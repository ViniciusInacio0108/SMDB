#include <stdio.h>
#include <string.h>
#include "criarTabela.h"

extern void showCriarNovaTabelaMenu()
{
    char nomeDaTabela[100];
    char nomeDaColunaChavePrimaria[100];
    int quantidadeDeColunas;

    printf("--- Criar nova tabela ---\n\n");
    printf("Qual o nome deseja dar a tabela? [max 100 caracteres] [digite 0 para voltar]: ");
    scanf("%s", nomeDaTabela);

    if (strcmp(nomeDaTabela, "0") == 0)
    {
        return;
    }
    else if (nomeDaTabela == NULL)
    {
        printf("Nome da tabela null. Retornando...\n\n");
        return;
    }

    printf("Qual o nome deseja dar coluna que será a chave primária? [max 100 caracteres] [digite 0 para voltar]: ");
    scanf("%s", nomeDaColunaChavePrimaria);

    if (strcmp(nomeDaColunaChavePrimaria, "0") == 0)
    {
        return;
    }
    else if (nomeDaColunaChavePrimaria == NULL)
    {
        printf("Nome da coluna null. Retornando...\n\n");
        return;
    }

    printf("%s, %s", nomeDaTabela, nomeDaColunaChavePrimaria);

    criarTabela(nomeDaTabela, nomeDaColunaChavePrimaria);
}