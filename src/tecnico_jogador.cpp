#include "tecnico_jogador.h"
#include <iostream>

// Construtor
tecnico_jogador::tecnico_jogador(std::string n, int i, double s, std::string p, int g, int e, double bonus): jogador(n, i, s, p, g), tecnico(n, i, s, e), bonus_duplo_papel(bonus) {}

// Cálculo do salário
double tecnico_jogador::calcular_salario() const {
    return jogador::calcular_salario() + tecnico::calcular_salario() + bonus_duplo_papel;
}

// Gets
double tecnico_jogador::getBonusDuploPapel() const {
    return bonus_duplo_papel;
}

// Define bonus por desempenhar duplo papel
void tecnico_jogador::setBonusDuploPapel(double bonus) {
    bonus_duplo_papel = bonus;
}

// Imprime os dados
void tecnico_jogador::imprimeDados() const {
    std::cout << "Nome: " << jogador::getNome() << std::endl;
    std::cout << "Idade: " << jogador::getIdade() << std::endl;
    std::cout << "Salário: " << calcular_salario() << std::endl;
    std::cout << "Posição: " << jogador::getPosicao() << std::endl;
    std::cout << "Gols marcados: " << jogador::getGolsMarcados() << std::endl;
    std::cout << "Experiência: " << tecnico::getExperiencia() << std::endl;
    std::cout << "Bonus duplo papel: " << bonus_duplo_papel << std::endl;
}

// Sobrecarga do operador <<
std::ostream& operator<<(std::ostream& o, const tecnico_jogador& tj) {
    o   << "Nome: " << tj.jogador::getNome() << "\n"
        << "Idade: " << tj.jogador::getIdade() << "\n"
        << "Salario: " << tj.calcular_salario() << "\n"
        << "Posicao: " << tj.getPosicao() << "\n"
        << "Gols marcados: " << tj.getGolsMarcados() << "\n"
        << "Experiencia: " << tj.getExperiencia() << "\n"
        << "Bonus duplo papel: " << tj.getBonusDuploPapel() << "\n";
    return o;
}
