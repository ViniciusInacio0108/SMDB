#include <stdio.h>
#include <string.h>
#include "functions/showMainMenu.h"
#include "functions/showCriarNovaTabelaMenu.h"
#include "functions/listarTodasAsTabelas.h"
#include "functions/deletarTabela.h"
#include "functions/adicionarLinha.h"
#include "functions/listarLinhasDeUmaTabela.h"
#include "functions/removerLinha.h"

int main(int argc, char const *argv[])
{
    // variáveis da main
    int respostaDoMainMenu = 1;
    char opcaoLinha;
    while (respostaDoMainMenu != 0)
    {
        // start up do menu principal
        showMainMenu();
        scanf("%d", &respostaDoMainMenu);

        if (respostaDoMainMenu == 1)
        {
            showCriarNovaTabelaMenu();
        }
        else if (respostaDoMainMenu == 2)
        {
            listarTodasAsTabelas();
        }
        else if (respostaDoMainMenu == 3)
        {
            opcaoLinha = 'S';
            while (opcaoLinha == 'S')
            {
                adicionarLinha();
                printf("Deseja continuar adicionando linhas? [S/N]\n");
                scanf(" %c", &opcaoLinha);
            }
        }
        else if (respostaDoMainMenu == 4)
        {
            litarTodasAsLinhasDeUmaTabela();
        }
        else if (respostaDoMainMenu == 6)
        {
            removerLinha();
        }
        else if (respostaDoMainMenu == 7)
        {
            deletarTabela();
        }
    }
    printf("\nSaindo...");
}