#include "time_futebol.h"
#include <iostream>

//construtor
time_futebol::time_futebol(std::string n, tecnico* t, int p): nome(n), tec(t), pontuacao(p) {}

//obtem nome do time
std::string time_futebol::getNome() const {
    return nome;
}

//define nome do time
void time_futebol::setNome(const std::string& n) {
    nome = n;
}

//obtem tecnico do time
tecnico* time_futebol::getTecnico() const {
    return tec;
}

//define tecnico do time
void time_futebol::setTecnico(tecnico* t) {
    tec = t;
}

//obtem pontuacao do time
int time_futebol::getPontuacao() const {
    return pontuacao;
}

//adiciona jogador ao time
void time_futebol::adicionar_jogador(jogador* j) {
    jogadores.push_back(j);
}

//registra resultado de um jogo
void time_futebol::registrar_resultado(char resultado) {
    if (resultado == 'V') {
        pontuacao += 3;
    } 
    
    else if (resultado == 'E') {
        pontuacao += 1;
    }

    else if (resultado == 'D') {
        pontuacao += 0;
    }

    else {
        std::cout << "Resultado invalido" << std::endl;
    }

}

//exibe informacoes do time
void time_futebol::exibir_informacoes() const {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Tecnico: " << tec->getNome() << std::endl;
    std::cout << "Pontuacao: " << pontuacao << std::endl;
    std::cout << "Jogadores: " << std::endl;
    for (auto j : jogadores) {
        std::cout << j->getNome() << std::endl;
    }
}

//compara times
bool time_futebol::operator<(const time_futebol& t) const {
    return pontuacao < t.pontuacao;
}