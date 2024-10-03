#include "tecnico.h"
#include <iostream>


// Construtor
tecnico::tecnico(std::string n, int i, double s, int e) : membro_clube(n, i, s), experiencia(e) {}

// Cálculo do salário
double tecnico::calcular_salario() const {
    return salario + (experiencia * 200); // Exemplo de cálculo de salário
}

// Gets
int tecnico::getExperiencia() const {
    return experiencia;
}

// Define experiência
void tecnico::setExperiencia(int e) {
    experiencia = e;
}

// Imprime os dados
void tecnico::imprimeDados() const {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Salário: " << salario << std::endl;
    std::cout << "Experiência: " << experiencia << std::endl;
}
