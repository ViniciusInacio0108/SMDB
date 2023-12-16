# SMDB

Este repositório é dedicado ao projeto de Introdução às Técnicas de Programação, do curso de Bacharelado em Tecnologia da Informação do Instituto Metrópole Digital (IMD). O projeto consiste em um sistema básico de banco de dados relacional, salvo em arquivos e utilizando a linguagem C. Dentro do sistema é possível criar, listar, editar e excluir tabelas e dados. A seguir, apresentamos a documentação completa do projeto. Boa leitura!

## Autores:

### Lucas Cunha de Azevedo.

### Vinícius Inácio A. da Silva.

## COMO CONFIGURAR O PROJETO

### CODEBLOCKS WINDOWS:

1. Baixar o IDE CodeBlocks para Windows. (Link: https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download)
2. Baixar o .zip do projeto. (Link do github: https://github.com/ViniciusInacio0108/SMDB)
3. Extrair o .zip do projeto dentro de uma pasta de sua escolha.
4. Abrir o CodeBlocks, e dentro dele abrir a pasta extraída do projeto.
5. Compilar e inicializar o projeto no arquivo "main.c".
6. O compilador para Windows da linguagem C já vem instalado no CodeBlocks. Não são necessárias outras mudanças.

## FEATURES DO PROJETO

### 1 - Criar uma nova tabela.

### 2 - Deletar uma tabela existente.

### 3 - Listar as tabelas existentes.

### 4 - Listar os dados de uma tabela.

### 5 - Pesquisar uma linha dentro de uma tabela.

### 6 - Deletar uma linha dentro da tabela.

### 7 - Adicionar uma linha dentro da tabela.

## DOCUMENTAÇÂO DAS FUNÇÕES DO PROJETO

### 1 - showMainMenu (Vinícius e Lucas)

Esta função faz com que o menu principal da nossa aplicação seja impresso no terminal, juntamente de uma mensagem de boas vindas.

Não existem parâmetros para este método.

### 2 - showCriarNovaTabelaMenu (Vinícius e Lucas)

Esta função faz com que seja fornecido ao usuário o menu de criação de uma nova tabela. Nesta função, ele poderá informar o nome da tabela a ser criada e qual o nome da coluna que servirá como chave primária para o usuário.

Não existem parâmetros para este método.

### 3 - criarTabela (Vinícius e Lucas)

Esta função faz com que seja criada uma tabela vazia. Neste método, é possível que o usuário informe quantas colunas serão criadas e quais seus respectivos nomes. Por fim, ele gera e nomeia um arquivo com os dados salvos no padrão .txt. EX: tabela_tal.txt

Existem dois parâmetros para esta função:

1. nomeDaTabela : refere-se ao nome dado para a tabela, que será usado para criar o arquivo.
2. nomeDaColunaChavePrimaria: refere-se ao nome dado para a coluna que servirá como chave primária para as linhas de dados.

### 4 - listarTodasAsTabelas (Vinícius e Lucas)

Esta função lista todas as tabelas que podem ser encontradas no banco de dados do programa (diretório /DB, no qual são salvos os arquivos). Caso não haja nenhuma tabela criada, o programa retornará essa informação.

Não existem parâmetros para esse método.

### 5 - deletarTabela (Vinícius e Lucas)

Esta função exclui uma tabela pré-existente, a partir do nome de um arquivo informado pelo usuário. Caso o arquivo não exista na base de dados, o sistema retorna uma mensagem de erro.

Não existem parâmetros para este método.

### 6 - adicionarLinha (Lucas e Vinícius)

Esta função faz com que seja adicionada uma, ou várias, linhas de dados dentro da tabela selecionada pelo usuário. A função é adaptável a qualquer uma das tabelas do banco de dados, com qualquer número de colunas – pede-se primeiro o parâmetro-chave da linha, que corresponde à primeira coluna, e posteriormente são solicitados os valores para as colunas subsequentes.

Não existem parâmetros para este método.

### 7 - listarLinhasDeUmaTabela (Vinícius e Lucas)

Esta função faz com que sejam listadas todas as linhas existentes dentro de uma tabela selecionada pelo usuário. Além disso, ela filtra qualquer linha em branco, ou que seja indevida. São listados também os nomes das colunas, para que o usuário saiba ao que se referem cada um dos dados.

Não existem parâmetros para este método.

### 8 - removerLinha (Vinícius e Lucas)

Esta função exclui uma linha de uma tabela selecionada pelo usuário, a partir da chave primária da linha, também informada no buffer. Para isso, a função abre o arquivo, copia-o e cola-o em um arquivo temporário com a modificação; posteriormente, o original é apagado e o temporário é renomeado.

Não existem parâmetros para este método.

### 9 - pesquisarNaTabela (Lucas e Vinícius)

Esta função possibilita que o usuário pesquise um valor dentro de uma tabela desejada, a partir de um rótulo de coluna também informado pelo usuário. O usuário pode, por exemplo, buscar uma linha pelo ID de sua chave primária; posteriormente, será retornado para ele o valor compatível e a linha completa de dados correspondente. Caso não exista nenhum valor com o filtro informado, uma mensagem de erro é impressa.

Não existem parâmetros para este método.

## O QUE FARÍAMOS DIFERENTE

1. A função para apagar linhas poderia, provavelmente, ser otimizada, para que não seja necessário criar um arquivo temporário.

2. Ainda é necessário proporcionar um melhor polimento visual dos menus e das funções do sistema, melhorando detalhes da experiência do usuário.

## O QUE AINDA NÃO FOI IMPLEMENTADO

1 - A principal função que ainda deve ser aprimorada é a de pesquisa de dados; não foi possível implementar, até o momento, todas as formas avançadas de busca de valores nas tabelas, tornando os resultados mais personalizáveis;

2 - Ainda não é possível criar tabelas, tuplas e strings em geral com espaços vazios;

3 - A alocação das strings e vetores, até o momento, é realizada de forma estática; portanto, há limites no número de caracteres que podem ser informados pelo usuário;

4 - Ainda deve ser implementada uma forma de inserir dados na tabela no momento de sua própria criação;

5 - Deve ser retirada a extensão ".txt" dos nomes das tabelas quando é feita sua listagem, na função listarTodasAsTabelas;

7 - Ainda não foi implementada a checagem dos valores informados pelo usuário para as chaves primárias das linhas das tabelas;

8 - Idealmente, deve ser adicionada uma forma de voltar imediatamente à tela de deletar tabelas, para que possam ser excluídas múltiplas tabelas sucessivamente;

9 - Quando a última linha de uma tabela é apagada, uma linha em branco é deixada no final do arquivo; no entanto, isso não deve afetar a experiência do usuário, já que o algoritmo foi condicionado a ignorar linhas em branco.
