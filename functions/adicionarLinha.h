#include <stdio.h>
#include <string.h>

extern void adicionarLinha()
{
    char tabelaAAdicionar[100], arquivoAAdicionar[150] = "DB/", primeiraLinha[200], valorAAdicionar[100], linhaAAdicionar[200];
    char *token;
    int cont = 0, print_ok;
    printf("Digite o nome da tabela em que deseja adicionar uma linha.\n");
    scanf("%s", tabelaAAdicionar);
    strcat(arquivoAAdicionar, tabelaAAdicionar);
    strcat(arquivoAAdicionar, ".txt");

    FILE *pFileTabelaSendoModificada;

    fopen_s(&pFileTabelaSendoModificada, arquivoAAdicionar, "a+");

    if (pFileTabelaSendoModificada == NULL)
    {
        printf("Arquivo com problema. Voltando...\n");
        return;
    }

    // lê a primeira linha da tabela, com os rótulos das colunas
    fgets(primeiraLinha, 199, pFileTabelaSendoModificada);

    // retira o \n ao final da primeira linha, quando existe
    if (primeiraLinha[strlen(primeiraLinha) - 1] == '\n')
    {
        primeiraLinha[strlen(primeiraLinha) - 1] = '\0';
    }

    // função strtok separa a primeira linha em suas diferentes colunas, a partir do separador |
    token = strtok(primeiraLinha, "|");
    while (token != NULL)
    {
        if (cont == 0)
        {
            printf("Digite o valor para a chave primária (coluna %s) [valor inteiro sem negativo]:\n", token);
            scanf("%s", valorAAdicionar);
            strcpy(linhaAAdicionar, "\n");
            token = strtok(NULL, "|");
            cont++;
        }
        else
        {
            printf("Digite o valor para a coluna %s:\n", token);
            scanf("%s", valorAAdicionar);
            token = strtok(NULL, "|");
        }
        strcat(linhaAAdicionar, valorAAdicionar);
        strcat(linhaAAdicionar, "|");
    }

    // rewind reseta o ponteiro para sua localização correta
    rewind(pFileTabelaSendoModificada);

    // checa-se se a linha foi adicionada corretamente
    print_ok = fprintf_s(pFileTabelaSendoModificada, linhaAAdicionar);

    if (print_ok < 0)
    {
        printf("Erro na inserção da linha! Voltando...\n");
        return;
    }
    else
    {
        printf("Linha adicionada com sucesso!\n");
    }
    fclose(pFileTabelaSendoModificada);
}