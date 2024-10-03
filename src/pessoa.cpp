#include "pessoa.h"

//construtor
int pessoa::contador = 0;


pessoa::pessoa(std::string n, int i) : nome(n), idade(i) {
    contador++;
}

//destrutor
pessoa::~pessoa() {
    contador--;
}

//obtem nome da pessoa
std::string pessoa::getNome() const {
    return nome;
}

//define nome da pessoa
void pessoa::setNome(const std::string& n) {
    nome = n;
}

//obtem idade da pessoa
int pessoa::getIdade() const {
    return idade;
}

//define idade da pessoa
void pessoa::setIdade(int i) {
    idade = i;
}

//compara pessoas
bool pessoa::operator==(const pessoa& p) const {
    return nome == p.nome && idade == p.idade;
}

//obtem contador de pessoas
int pessoa::getContador() {
    return contador;
}
