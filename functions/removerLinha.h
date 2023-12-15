#include <stdio.h>
#include <string.h>

extern void removerLinha()
{
    char tabelaEscolhida[100];
    char chavePrimariaDaLinha[100];
    char nomeDoArquivoDaTabela[100] = "DB/";
    char linhaAtual[200];
    FILE *arquivoDaTabela;
    char *token;

    printf("\nEscolha a tabela que deseja remover uma linha.\n");
    scanf("%s", tabelaEscolhida);

    printf("\nDigite o valor da chave primária da linha que deseja remover.\n");
    scanf("%s", chavePrimariaDaLinha);

    strcat(nomeDoArquivoDaTabela, tabelaEscolhida);
    strcat(nomeDoArquivoDaTabela, ".txt");

    fopen_s(&arquivoDaTabela, nomeDoArquivoDaTabela, "r");

    if (arquivoDaTabela == NULL)
    {
        printf("\nArquivo com problema ou não encontrado. Voltando...\n\n");
        return;
    }

    int linhaASerApagada = 1;

    while (fgets(linhaAtual, sizeof(linhaAtual), arquivoDaTabela) != NULL)
    {
        char stringTemporario[200];
        strcpy(stringTemporario, linhaAtual);
        token = strtok(stringTemporario, "|");

        if (strcmp(token, chavePrimariaDaLinha) == 0)
        {
            break;
        }

        linhaASerApagada++;
    }

    fclose(arquivoDaTabela);

    // Abrir o arquivo para leitura
    FILE *arquivoEntrada = fopen(nomeDoArquivoDaTabela, "r");
    if (arquivoEntrada == NULL)
    {
        perror("Erro ao abrir o arquivo para leitura");
        return;
    }

    // Criar um arquivo temporário para armazenar o conteúdo atualizado
    FILE *arquivoTemp = fopen("DB/temp.txt", "w");
    if (arquivoTemp == NULL)
    {
        perror("Erro ao criar arquivo temporário");
        fclose(arquivoEntrada);
        return;
    }

    // Deletar a linha desejada
    int numeroDaLinhaAtual = 1;
    char buffer[200];

    while (fgets(buffer, sizeof(buffer), arquivoEntrada) != NULL)
    {
        if (numeroDaLinhaAtual != linhaASerApagada)
        {
            fputs(buffer, arquivoTemp);
        }
        else
        {
                }

        numeroDaLinhaAtual++;
    }

    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoTemp);

    // Remover o arquivo original
    if (remove(nomeDoArquivoDaTabela) != 0)
    {
        perror("Erro ao remover o arquivo original");
        return;
    }

    // Renomear o arquivo temporário para o nome original
    if (rename("DB/temp.txt", nomeDoArquivoDaTabela) != 0)
    {
        perror("Erro ao renomear o arquivo temporário");
        return;
    }
}