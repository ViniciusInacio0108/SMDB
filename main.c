#include <stdio.h>
#include <string.h>
#include "functions/showMainMenu.h"

int main(int argc, char const *argv[])
{
    // variáveis da main
    int respostaDoMainMenu;

    // start up do menu principal
    showMainMenu();
    scanf("%d", &respostaDoMainMenu);

    return 0;
}
