# SMDB

Esse repositório é dedicado ao projeto de ITP no curso de TI da IMD. O projeto basicamente serve como um sistema básico de banco de dados relacional salvo em arquivos utilizando a linguagem C. Dentro do sistema você pode criar, listar, editar e excluir tabelas e dados. A seguir está a documentação completa do projeto. Boa leitura!

## Autores:

### Lucas Cunha de Azevedo.

### Vinícius Inácio A. da Silva.

## COMO CONFIGURAR O PROJETO

### CODEBLOCKS WINDOWS:

1. Baixar o IDE CodeBlocks para Windows. (Link: https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download)
2. Baixar o .zip do projeto. (Link do github: https://github.com/ViniciusInacio0108/SMDB)
3. Extrair o .zip do projeto dentro de uma pasta de sua escolha.
4. Abrir o CodeBlocks e dentro dele abrir a pasta extraída do projeto.
5. Buildar e inicializar o projeto no arquivo "main.c".
6. O compilador para Windows da lingaguem C já vem instalado no CodeBlocks. Não são necessárias mais mudanças.

## FEATURES DO PROJETO

### 1 - Criar uma nova tabela.

### 2 - Deletar uma tabela existente.

### 3 - Listar as tabelas existentes.

### 4 - Listar os dados de uma tabela.

### 5 - Pesquisar uma linha dentro de uma tabela.

### 6 - Deletar uma linha dentro da tabela.

### 7 - Adicionar uma linha dentro da tabela.

## DOCUMENTAÇÂO DAS FUNÇÔES DO PROJETO

### 1 - showMainMenu (Vinícius e Lucas)

Essa função faz com que o menu principal da nossa aplicação seja printado no terminal juntamente de uma mensagem de boas vindas.

Não existem paramentros para esse método.

### 2 - showCriarNovaTabelaMenu (Vinícius e Lucas)

Essa função faz com que o seja fornecido ao usuário o menu de criação de uma nova tabela. Nessa função ele poderá informar o nome da tabela a ser criada e qual o nome da coluna que servirá como chave primária para o usuário.

Não existem paramentros para esse método.

### 3 - criarTabela (Vinícius e Lucas)

Essa função faz com que o seja criada uma tabela vazia. Nesse método é possível o usuário informar quantas colunas ele serão criadas e quais os seus respectivos nomes. Por fim ele gera um arquivo com esses dados salvos no padrão .txt onde o nome do arquivo será o nome fornecido para a tabela. EX: tabela_tal.txt

Existem dois parâmetros para essa função.

1. nomeDaTabela : respectivamente ligada ao nome dado para a tabela e que será usar para criar o arquivo.
2. nomeDaColunaChavePrimaria : respectivamente ligada ao nome dado para a coluna que servirá como chave primária para as linhas de dados.

### 4 - listarTodasAsTabelas (Vinícius e Lucas)

Essa função faz com que o usuário ganhe a habilidade de poder listar as tabelas que tem criadas. Caso não tenha nenhuma tabela criada o programa retornará essa informação.

Essa função funciona basicamente pegando cada arquivo do diretório do banco de dados (DB) aonde fica salvo cada arquivo de tabela. Em seguida ele retorna o nome das tabelas criadas.

Não existem paramentros para esse método.

### 5 - deletarTabela (Vinícius e Lucas)

Essa função faz o delete de uma tabela pré existente e caso não exista retorna uma mensagem de erro.

Essa função funciona basicamente pegando o nome dado pelo usuário e buscando na pasta de banco de dados (DB) se existe e deletando com a função incluída do C delete().

Não existem paramentros para esse método.

### 6 - adicionarLinha (Lucas e Vinícius)

Essa função faz com que seja adicionada uma linha de dados dentro da tabela selecionada pelo usuário. Podendo ele adicionar quantas vezes quiser até que o usuário não querer mais. Além disso é adaptável a qualquer tabela com quantas colunas tiverem.

Não existem paramentros para esse método.

### 7 - listarLinhasDeUmaTabela (Vinícius e Lucas)

Essa função faz com que seja listada todas as linhas existentes dentro de uma tabela selecionada pelo usuário. Além disso ela filtra qualquer linha em branco ou que seja indevida. É listada também o nome das colunas para que o usuário tenha noção de qual coluna cada dado se relaciona.

Não existem paramentros para esse método.

### 8 - removerLinha (Vinícius e Lucas)

Essa função faz com que o usuário selecione a tabela desejada, selecione a chave primária da linha que deseja excluir e faz a remoção desse dado da tabela. Infelizmente não encontramos formas mais performáticas de efetuar essa função sem ter que abrir o arquivo, copiar ele, colar em um arquivo temporário com a modificação e posteriormente apagar o original e renomear o temporário. Gostariamos de melhorar essa função no futuro.

Não existem paramentros para esse método.

### 9 - pesquisarNaTabela (Lucas e Vinícius)

Essa função faz com que o usuário possa selecionar uma tabela desejada e pesquisar uma linha que corresponda ao valor da coluna selecionada por ele. Digamos que o usuário queira buscar uma linha pelo Id da chave primária e digite o valor desejado. Será retornado para ele o valor compartível e uma mensagem de erro caso não exista nenhum valor com o filtro informado.

Não existem paramentros para esse método.

## O QUE FARÍAMOS DIFERENTE

1. Melhorar a função de apagar a linha e deixar mais performática.

2. Melhorar a pesquisa dentro do sistema, já que não conseguimos adicionar todos os filtros.

## O QUE FICAMOS A DESEJAR

1 - No momento falta polimento visual de menus e erros.

2 - Poder criar tabelas, tuplas e strings em geral com espaços vazios.

3 - Na própria criação da tabela já poder adicionar dados.

4 - Retirar o ".txt" dos nomes da tabela quando fazemos a listagem.

5 - Voltar na tela de deletar tabela.

6 - O detalhe da última linha apagada de uma tabela fica vazia. Mas não afeta o sistema.

7 - Adicionar a checagem de se já existe uma linha criada com a chave primária digitada.
