#ifndef TIME_FUTEBOL_H
#define TIME_FUTEBOL_H

#include <string>
#include <vector>
#include "tecnico.h"
#include "jogador.h"

/**
 * @class time_futebol
 * @brief Representa um time de futebol.
 * 
 * A classe time_futebol contém informações sobre o nome do time, o técnico do time,
 * os jogadores do time e a pontuação do time. Ela fornece métodos para obter e definir
 * o nome do time, o técnico do time, a pontuação do time, adicionar jogadores ao time,
 * registrar o resultado de um jogo e exibir as informações do time.
 */

class time_futebol {

    protected:

        std::string nome; //< Nome do time.
        tecnico* tec; //< Ponteiro para o técnico do time.
        std::vector<jogador*> jogadores; //< Vetor de ponteiros para os jogadores do time.
        int pontuacao; //< Pontuação do time.
    
    public:

        time_futebol(std::string n = "", tecnico* t = nullptr, int p = 0); //construtor

        std::string getNome() const; //< Obtém o nome do time.

        void setNome(const std::string& n); //< Define o nome do time.

        tecnico* getTecnico() const; //< Obtém o técnico do time.

        void setTecnico(tecnico* t); //< Define o técnico do time.

        int getPontuacao() const; //< Obtém a pontuação do time.

        void adicionar_jogador(jogador* j); //< Adiciona um jogador ao time.

        void registrar_resultado(char resultado); //< Registra o resultado de um jogo.

        void exibir_informacoes() const; //< Exibe as informações do time.

        bool operator<(const time_futebol& t) const; //< Compara times.

};

#endif // TIME_H