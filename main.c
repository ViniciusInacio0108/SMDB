#include <stdio.h>
#include <string.h>
#include "functions/showMainMenu.h"
#include "functions/showCriarNovaTabelaMenu.h"

int main(int argc, char const *argv[])
{
    // variáveis da main
    int respostaDoMainMenu;
    while (respostaDoMainMenu != 0)
    {
        // start up do menu principal
        showMainMenu();
        scanf("%d", &respostaDoMainMenu);

        if (respostaDoMainMenu == 1)
        {
            showCriarNovaTabelaMenu();
        }
    }

    printf("\nTchau!");

    return 0;
}
