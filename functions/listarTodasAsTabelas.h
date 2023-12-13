#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../constants/contants.h"

extern void listarTodasAsTabelas()
{
    // pegar arquivo contendo a lista
    FILE *pListaDeTabelasFile;

    fopen_s(&pListaDeTabelasFile, NOME_ARQUIVO_LISTA_TABELAS, "r");
}