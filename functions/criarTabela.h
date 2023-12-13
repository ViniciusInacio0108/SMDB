#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    FILE *file;

    strcat(nomeDoArquivoFinal, nomeDaTabela);
    strcat(nomeDoArquivoFinal, ".txt");
    fopen_s(&file, nomeDoArquivoFinal, "w");

    if (file == NULL)
    {
        printf("Arquivo com problema. Voltando...\n");
        return;
    }
    fprintf_s(file, nomeDasColunasConcatenadas);
    fclose(file);
}