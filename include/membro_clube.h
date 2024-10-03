#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include <string>
#include "pessoa.h"

/**
 * @class membro_clube
 * @brief Representa um membro de um clube.
 * 
 * A classe membro_clube contém informações sobre o nome, idade e salário do membro.
 * Ela fornece métodos para obter e definir o salário do membro, calcular o salário do membro
 * e imprimir os dados do membro.
 */

class membro_clube : public pessoa{
    protected:
        double salario; //< Salário do membro.
    
    public:

        membro_clube(std::string n, int i , double s); //construtor

        virtual ~membro_clube(); //destrutor
        
        double getSalario() const; //obtem salario do membro

        void setSalario(double s); //define salario do membro

        virtual double calcular_salario() const = 0; //calcula salario do membro
     
        friend std::ostream& operator<<(std::ostream& o, const membro_clube& m); //imprime dados do membro
        
};

#endif


