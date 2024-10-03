#ifndef TECNICOS_H
#define TECNICOS_H

#include <string>
#include "membro_clube.h"

/**
 * @class tecnico
 * @brief Representa um técnico de futebol.
 * 
 * A classe tecnico contém informações sobre o nome, idade, salário e experiência do técnico.
 * Ela fornece métodos para calcular o salário do técnico, obter e definir a experiência do técnico,
 * imprimir os dados do técnico e comparar técnicos.
 */


class tecnico : public membro_clube{

    protected:
        int experiencia; //< Experiência do técnico.
    
    public:

        tecnico(std::string n, int i, double s, int e); //construtor

        double calcular_salario() const override; //calcula salario do técnico

        int getExperiencia() const; //obtem experiência do técnico

        void setExperiencia(int e); //define experiência do técnico

        void imprimeDados() const override; //imprime dados do técnico
};

#endif // TECNICOS_H