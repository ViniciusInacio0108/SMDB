#include <stdio.h>
#include <string.h>

extern void pesquisaTabela()
{
    char tabelaAPesquisar[100], arquivoAPesquisar[150] = "DB/", primeiraLinha[200], valorAPesquisar[100], linha[200], linhaCopia[200], coluna[100], colunas[100][100], lixo;
    char *token;
    int cont = 0, i, indiceColuna = -1, check = 0;

    // pega o "\n" restante no buffer
    scanf("%c", &lixo);
    printf("Digite o nome da tabela em que deseja pesquisar um valor.\n");
    fgets(tabelaAPesquisar, 99, stdin);

    // apaga o "\n" ao final da string
    tabelaAPesquisar[strlen(tabelaAPesquisar) - 1] = '\0';

    strcat(arquivoAPesquisar, tabelaAPesquisar);
    strcat(arquivoAPesquisar, ".txt");

    FILE *pFileTabelaSendoPesquisada;

    fopen_s(&pFileTabelaSendoPesquisada, arquivoAPesquisar, "r");

    if (pFileTabelaSendoPesquisada == NULL)
    {
        printf("Tabela não encontrada. Voltando...\n");
        return;
    }

    // lê a primeira linha da tabela, com os rótulos das colunas
    fgets(primeiraLinha, 199, pFileTabelaSendoPesquisada);

    // retira o \n ao final da primeira linha, quando existe
    if (primeiraLinha[strlen(primeiraLinha) - 1] == '\n')
    {
        primeiraLinha[strlen(primeiraLinha) - 1] = '\0';
    }

    // função strtok separa a primeira linha em suas diferentes colunas, a partir do separador |
    token = strtok(primeiraLinha, "|");
    printf("Colunas da tabela:\n");
    while (token != NULL)
    {
        printf("%s", token);
        if (cont == 0)
        {
            printf(" (chave primária)\n");
        }
        else
        {
            printf("\n");
        }
        strcpy(colunas[cont], token);
        token = strtok(NULL, "|");
        cont++;
    }

    do
    {
        printf("Digite a coluna em que deseja procurar o valor.\n");
        fgets(coluna, 99, stdin);
        coluna[strlen(coluna) - 1] = '\0';
        for (i = 0; i <= cont; i++)
        {
            if (strcmp(colunas[i], coluna) == 0)
            {
                indiceColuna = i;
                // guarda o índice da coluna em que o usuário quer procurar valores.
            }
        }
        if (indiceColuna < 0)
        {
            printf("Coluna não encontrada!\n");
        }
    } while (indiceColuna < 0);
    // laço se repete caso o usuário digite um valor inválido para a coluna.

    printf("Digite o valor que deseja pesquisar.\n");
    fgets(valorAPesquisar, 99, stdin);
    valorAPesquisar[strlen(valorAPesquisar) - 1] = '\0';

    // rewind retoma o ponteiro do arquivo para o início
    rewind(pFileTabelaSendoPesquisada);

    do
    {
        // lê uma linha do arquivo e checa se é vazia
        fgets(linha, 199, pFileTabelaSendoPesquisada);
        if (strcmp(linha, "") != 0 && strcmp(linha, "\n") != 0 && strcmp(linha, "\0") != 0)
        {
            if (linha[strlen(linha) - 1] == '\n')
            {
                linha[strlen(linha) - 1] = '\0';
            }
            // faz-se uma cópia da linha para impressão e para a condição de parada. A linha original será usada no strtok
            strcpy(linhaCopia, linha);
            cont = 0;
            token = strtok(linha, "|");
            while (token != NULL && strlen(linhaCopia) > 1)
            {
                if (cont == indiceColuna && strcmp(token, valorAPesquisar) == 0)
                {
                    printf("Valor encontrado na linha:\n%s\n", linhaCopia);
                    check = 1;
                }
                cont++;
                token = strtok(NULL, "|");
            }
        }

    } while (strlen(linhaCopia) > 1);

    if (check == 0)
    {
        printf("Valor não encontrado!\n");
        fclose(pFileTabelaSendoPesquisada);
    }

    fclose(pFileTabelaSendoPesquisada);
}