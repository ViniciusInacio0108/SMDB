#include <stdio.h>
#include <string.h>

extern void deletarTabela()
{
    char tabelaADeletar[100], arquivoADeletar[150] = "DB/";
    int del;
    printf("Digite o nome da tabela a ser deletada.\n");
    scanf("%s", tabelaADeletar);
    strcat(arquivoADeletar, tabelaADeletar);
    strcat(arquivoADeletar, ".txt");
    del = remove(arquivoADeletar);

    if (del == 0)
    {
        printf("Tabela deletada com sucesso!\n");
        return;
    }
    else
    {
        printf("Tabela não encontrada. Retornando...\n");
        return;
    }
}