#include <stdio.h>
#include <string.h>

extern void litarTodasAsLinhasDeUmaTabela()
{
    char tabelaEscolhida[100];
    char nomeDoArquivoDaTabela[100] = "DB/";
    char linhaAtual[200];

    printf("\n");
    printf("Escolha a tabela que deseja listar todas as linhas.\n");
    scanf("%s", tabelaEscolhida);

    strcat(nomeDoArquivoDaTabela, tabelaEscolhida);
    strcat(nomeDoArquivoDaTabela, ".txt");

    FILE *arquivoEscolhido;
    fopen_s(&arquivoEscolhido, nomeDoArquivoDaTabela, "r");

    if (arquivoEscolhido == NULL)
    {
        printf("\nArquivo com problema ou não encontrado. Voltando...\n\n");
        return;
    }

    printf("\n--- TODO OS DADOS DA TABELA: %s ---\n\n", tabelaEscolhida);
    while (fgets(linhaAtual, sizeof(linhaAtual), arquivoEscolhido) != NULL)
    {
        printf(linhaAtual);
    }

    printf("\n");
    printf("\n");

    fclose(arquivoEscolhido);
}