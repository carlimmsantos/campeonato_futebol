#include "jogador.h"
#include <iostream>

//construtor
jogador::jogador(std::string n, int i, double s, std::string p, int g): membro_clube(n, i, s), posicao(p), gols_marcados(g) {}

//calcula salario do jogador
double jogador::calcular_salario() const {
     return salario + gols_marcados * 100;
 }

//obtem posicao do jogador
std::string jogador::getPosicao() const {
    return posicao;
}

//define posicao do jogador
void jogador::setPosicao(const std::string& p) {
    posicao = p;
}

//obtem gols marcados pelo jogador
int jogador::getGolsMarcados() const {
    return gols_marcados;
}

//define gols marcados pelo jogador
void jogador::setGolsMarcados(int g) {
    gols_marcados = g;
}

//compara jogadores
bool jogador::operator<(const jogador& j) const {
    return gols_marcados < j.gols_marcados;
}

//imprime dados do jogador
void jogador::imprimeDados() const{
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Salário: " << calcular_salario() << std::endl;
    std::cout << "Posição: " << posicao << std::endl;
    std::cout << "Gols marcados: " << gols_marcados << std::endl;
    std::cout << std::endl;
}
