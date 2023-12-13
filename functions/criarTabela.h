#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../constants/contants.h"

extern void criarTabela(char nomeDaTabela[25], char nomeDaColunaPrimaria[25])
{
    // pegar o nome das colunas
    int quantidadeDeColunas = 0;
    char nomeDaColunaAtual[25];
    char nomeDoArquivoFinal[100] = "DB/";
    char nomeDasColunasConcatenadas[200];

    // concatenar nome da coluana primária
    strcat(nomeDasColunasConcatenadas, nomeDaColunaPrimaria);

    while (quantidadeDeColunas == 0)
    {
        printf("Quantas colunas deseja adicionar? \n");
        scanf("%d", &quantidadeDeColunas);

        if (quantidadeDeColunas == 0)
        {
            printf("Digite um valor válido.\n");
        }
    }

    for (int i = 1; i <= quantidadeDeColunas; i++)
    {
        printf("Digite o nome da coluna n%d\n", i);
        scanf("%s", nomeDaColunaAtual);
        strcat(nomeDasColunasConcatenadas, nomeDaColunaAtual);
        strcat(nomeDasColunasConcatenadas, "|");
    }

    // gravar em arquivo a tabela criada
    FILE *pFileTabelaSendoCriada;

    strcat(nomeDoArquivoFinal, nomeDaTabela);
    strcat(nomeDoArquivoFinal, ".txt");
    fopen_s(&pFileTabelaSendoCriada, nomeDoArquivoFinal, "w");

    if (pFileTabelaSendoCriada == NULL)
    {
        printf("Arquivo com problema. Voltando...\n");
        return;
    }
    fprintf_s(pFileTabelaSendoCriada, nomeDasColunasConcatenadas);
    fclose(pFileTabelaSendoCriada);

    // criar arquivo onde podemos salvar os nomes de todas as tabelas criadas para podermos recuperar e listar todas elas
    FILE *pListaDeTodasAsTabelasFile;

    fopen_s(&pListaDeTodasAsTabelasFile, NOME_ARQUIVO_LISTA_TABELAS, "a+");
    // ver depois se duplicadas as tabelas pode dar BO
    strcat(nomeDoArquivoFinal, "|");
    fprintf_s(pListaDeTodasAsTabelasFile, nomeDoArquivoFinal);
    fclose(pListaDeTodasAsTabelasFile);
}