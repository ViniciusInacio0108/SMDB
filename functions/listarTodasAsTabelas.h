#include <stdio.h>
#include <stdlib.h>
#include <io.h>

extern void listarTodasAsTabelas()
{
    // listar tabelas pegando os arquivos das tabelas dentro do diretório "DB"
    intptr_t ffhandle;
    struct _finddata_t ffinfo;
    int temTabelaAlguma;

    printf("\n");

    if ((ffhandle = _findfirst("./DB/*.*", &ffinfo)) == -1)
    {
        perror("findfirst falhou");
        exit(1);
    }
    do
    {
        // remover os pontos
        if (strcmp(ffinfo.name, ".") == 1 && strcmp(ffinfo.name, "..") == 1)
        {
            printf("Tabela encontrada [ignore o .txt]: %s\n", ffinfo.name);
            temTabelaAlguma = 1;
        }
    } while (_findnext(ffhandle, &ffinfo) == 0);
    _findclose(ffhandle);

    if (temTabelaAlguma != 1)
    {
        printf("Não existem tabelas criadas!\n");
    }
    printf("\n");
}