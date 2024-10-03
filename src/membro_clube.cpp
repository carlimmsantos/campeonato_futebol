#include "membro_clube.h"
#include <iostream>

//construtor
membro_clube::membro_clube(std::string n, int i, double s) : pessoa(n, i), salario(s) {}

//destrutor
membro_clube::~membro_clube() {}

//obtem salario do membro
double membro_clube::getSalario() const {
    return salario;
}

//define salario do membro
void membro_clube::setSalario(double s) {
    salario = s;
}

//imprime dados do membro
std::ostream& operator<<(std::ostream& o, const membro_clube& m) {
    o   << "Nome: " << m.nome 
        << ", Idade: " << m.idade 
        << ", Salário: " << m.salario;
    return o;
}