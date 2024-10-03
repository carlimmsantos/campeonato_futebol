#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "jogador.h"
#include "tecnico.h"

/**
 * @class tecnico_jogador
 * @brief Representa um técnico que também é jogador.
 * 
 * A classe tecnico_jogador contém informações sobre o nome, idade, salário, posição e gols marcados
 * pelo jogador, bem como a experiência do técnico. Ela fornece métodos para calcular o salário do jogador,
 * obter e definir a posição do jogador, obter e definir a quantidade de gols marcados, obter e definir a experiência
 * do técnico, imprimir os dados do jogador e comparar jogadores.
 */

class tecnico_jogador : public virtual jogador, public virtual tecnico{

    protected:
        double bonus_duplo_papel; //< Bônus por desempenhar duplo papel.


    public:
        tecnico_jogador(std::string n = "", int i = 0, double s = 0.0, std::string p = "", int g = 0, int e = 0 , double bonus = 0.0); //construtor

        double getBonusDuploPapel() const; //obtem bonus por desempenhar duplo papel

        void setBonusDuploPapel(double b); //define bonus por desempenhar duplo papel

        double calcular_salario() const override; //calcula salario do jogador

        void imprimeDados() const override; //imprime dados do jogador

        friend std::ostream& operator<<(std::ostream& o, const tecnico_jogador& tj); //imprime dados do jogador
        
};

#endif // TECNICO_JOGADOR_H