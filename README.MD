# Sistema de Gerenciamento de Campeonato de Futebol

## Descrição

Este projeto é um sistema de gerenciamento de campeonatos de futebol, desenvolvido em C++. Ele permite gerenciar times, jogadores, técnicos, jogos, além de calcular a classificação de um campeonato com base nos resultados das partidas.

## Funcionalidades

- Adicionar times e jogadores ao campeonato.
- Registrar resultados de jogos entre os times.
- Exibir a classificação dos times com base nos pontos ganhos.
- Calcular o salário dos jogadores com base no número de gols marcados.
- Gerenciar técnicos, jogadores, e juízes.
  
## Estrutura do Projeto

- **src/**: Contém os arquivos `.cpp` com a implementação das classes.
- **include/**: Contém os arquivos `.h` (headers) para definir as classes e suas interfaces.
- **build/**: Diretório onde os arquivos objeto são gerados durante a compilação (criado pelo `Makefile`).
- **main.cpp**: Arquivo principal do projeto, onde o sistema é inicializado e o fluxo do programa é definido.

## Requisitos

- Compilador C++ com suporte a C++17 ou superior (como o `g++`).
- Sistema operacional Windows, Linux, ou MacOS.
- MSYS2 para ambientes Windows.

## Compilação e Execução

### Compilação Manual

Se você deseja compilar o projeto manualmente, use o seguinte comando:

```bash
g++ -o main src/*.cpp -Iinclude
