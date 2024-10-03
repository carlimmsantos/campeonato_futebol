#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

#include "membro_clube.h"

/**
 * @class jogador
 * @brief Representa um jogador de futebol.
 * 
 * A classe jogador contém informações sobre o nome, idade, salário, posição e gols marcados
 * pelo jogador. Ela fornece métodos para calcular o salário do jogador, obter e definir a posição
 * do jogador, obter e definir a quantidade de gols marcados, imprimir os dados do jogador e comparar
 * jogadores.
 */

class jogador : public membro_clube {
    protected:
        std::string posicao;//posicao do jogador
        int gols_marcados; //gols marcados pelo jogador
    
    public:
    
            jogador(std::string n = "", int i = 0, double s = 0.0, std::string p = "", int g = 0); //construtor
    
            double calcular_salario() const override; //calcula salario do jogador
    
            std::string getPosicao() const; //obtem posicao do jogador

            void setPosicao(const std::string& p); //define posicao do jogador
    
            int getGolsMarcados() const; //obtem gols marcados pelo jogador

            void setGolsMarcados(int g); //define gols marcados pelo jogador

            void imprimeDados() const override; //imprime dados do jogador

            bool operator<(const jogador& j) const; //compara jogadores




};

#endif // JOGADOR_H