# SMDB
Esse repositório é dedicado ao projeto de ITP no curso de TI da IMD. O projeto basicamente serve como um sistema básico de banco de dados relacional salvo em arquivos utilizando a linguagem C. Dentro do sistema você pode criar, listar, editar e excluir tabelas e dados. A seguir está a documentação completa do projeto. Boa leitura!

##Autores:

### Vinícius Inácio A. da Silva.

### Lucas Cunha de Azevedo.

## COMO CONFIGURAR O PROJETO

## FEATURES DO PROJETO

### 1 - Criar uma nova tabela.

### 2 - Deletar uma tabela existente.

### 3 - Listar as tabelas existentes.

## DOCUMENTAÇÂO DAS FUNÇÔES DO PROJETO

### 1 - showMainMenu
Essa função faz com que o menu principal da nossa aplicação seja printado no terminal juntamente de uma mensagem de boas vindas.

Não existem paramentros para esse método.

### 2 - showCriarNovaTabelaMenu
Essa função faz com que o seja fornecido ao usuário o menu de criação de uma nova tabela. Nessa função ele poderá informar o nome da tabela a ser criada e qual o nome da coluna que servirá como chave primária para o usuário.

Não existem paramentros para esse método.

### 3 - criarTabela
Essa função faz com que o seja criada uma tabela vazia. Nesse método é possível o usuário informar quantas colunas ele serão criadas e quais os seus respectivos nomes. Por fim ele gera um arquivo com esses dados salvos no padrão .txt onde o nome do arquivo será o nome fornecido para a tabela. EX: tabela_tal.txt

Existem dois parâmetros para essa função. 

1. nomeDaTabela : respectivamente ligada ao nome dado para a tabela e que será usar para criar o arquivo.
   
3. nomeDaColunaChavePrimaria : respectivamente ligada ao nome dado para a coluna que servirá como chave primária para as linhas de dados.

### 4 - listarTodasAsTabelas
Essa função faz com que o usuário ganhe a habilidade de poder listar as tabelas que tem criadas. Caso não tenha nenhuma tabela criada o programa retornará essa informação.

Essa função funciona basicamente pegando cada arquivo do diretório do banco de dados (DB) aonde fica salvo cada arquivo de tabela. Em seguida ele retorna o nome das tabelas criadas.

Não existem paramentros para esse método.

### 5 - deletarTabela
Essa função faz o delete de uma tabela pré existente e caso não exista retorna uma mensagem de erro.

Essa função funciona basicamente pegando o nome dado pelo usuário e buscando na pasta de banco de dados (DB) se existe e deletando com a função incluída do C delete().

Não existem paramentros para esse método.

## DEMAIS DETALHES

## O QUE FICAMOS A DESEJAR

1 - No momento falta polimento de menus e erros.

2 - Poder criar tabelas, tuplas e strings em geral com espaços vazios.

3 - Na própria criação da tabela já poder adicionar dados.

4 - Retira ro ".txt" dos nomes da tabela quando fazemos a listagem.

5 - Voltar na tela de deletar tabela.
