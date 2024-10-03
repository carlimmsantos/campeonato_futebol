#include "juiz.h"
#include <iostream>


//construtor
juiz::juiz(std::string n, int i): pessoa(n, i), partidas_arbitradas(0) {
}

//obtem numero de partidas arbitadas
int juiz::getPartidasArbitradas() const {
    return partidas_arbitradas;
}

//define numero de partidas arbitadas
void juiz::setPartidasArbitradas(int p) {
    partidas_arbitradas = p;
}

/// Incrementa o número de partidas arbitadas pelo juiz.
void juiz::incrimentar_pariadas_arbitradas() {
    partidas_arbitradas++;
}

//imprime dados do juiz
void juiz::imprimeDados() const {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Partidas arbitadas: " << partidas_arbitradas << std::endl;
    std::cout << std::endl;
}

