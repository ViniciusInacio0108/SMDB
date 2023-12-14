#include <stdio.h>
#include <string.h>
#include "functions/showMainMenu.h"
#include "functions/showCriarNovaTabelaMenu.h"
#include "functions/listarTodasAsTabelas.h"
#include "functions/deletarTabela.h"

int main(int argc, char const *argv[])
{
    // variáveis da main
    int respostaDoMainMenu = 1;
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
        else if (respostaDoMainMenu == 7)
        {
            deletarTabela();
        }
    }

    printf("\nTchau!");

    return 0;
}
