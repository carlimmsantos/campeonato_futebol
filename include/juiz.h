#ifndef JUIZ_H
#define JUIZ_H

/**
 * @file juiz.h
 * @brief Declaração da classe juiz e seus métodos.
 * 
 * Este arquivo contém a declaração da classe juiz, que representa um juiz de futebol,
 * incluindo seus atributos e métodos para manipulação das partidas arbitadas.
 * 
 */



#include "pessoa.h"

class juiz : public pessoa {
    protected:
        int partidas_arbitradas; //< Número de partidas arbitadas pelo juiz.
    
    public:
    
            juiz(std::string n, int i);
    
            int getPartidasArbitradas() const; //< Obtém o número de partidas arbitadas pelo juiz.
            void setPartidasArbitradas(int p); //< Define o número de partidas arbitadas pelo juiz.
    
            void incrimentar_pariadas_arbitradas(); //< Incrementa o número de partidas arbitadas pelo juiz.


            void imprimeDados() const override; //< Imprime os dados do juiz.
};

#endif // JUIZ_H
