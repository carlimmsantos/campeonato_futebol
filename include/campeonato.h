/**
 * @file campeonato.h
 * @brief Declaração da classe campeonato e seus métodos.
 * 
 * Este arquivo contém a declaração da classe campeonato, que representa um campeonato de futebol,
 * incluindo seus atributos e métodos para manipulação dos times e jogos.
 */

#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <string>
#include <vector>
#include "time_futebol.h"
#include "jogo.h"

/**
 * @class campeonato
 * @brief Classe que representa um campeonato de futebol.
 * 
 * A classe campeonato contém informações sobre o nome do campeonato, os times participantes
 * e os jogos realizados. Ela fornece métodos para adicionar times e jogos, bem como para exibir
 * a classificação do campeonato.
 */

class campeonato {
    protected:
        std::string nome_campeonato; ///< Nome do campeonato.
        std::vector<time_futebol*> times; ///< Vetor de ponteiros para os times participantes.
        std::vector<jogo*> jogos; ///< Vetor de ponteiros para os jogos realizados.

    public:
        /**
         * @brief Construtor da classe campeonato.
         * @param n Nome do campeonato.
         */
        campeonato(const std::string n);

        /**
         * @brief Obtém o nome do campeonato.
         * @return Nome do campeonato.
         */
        std::string getNomeCampeonato() const;

        /**
         * @brief Define o nome do campeonato.
         * @param n Novo nome do campeonato.
         */
        void setNomeCampeonato(const std::string& n);

        /**
         * @brief Obtém os times participantes do campeonato.
         * @return Vetor de ponteiros para os times participantes.
         */
        const std::vector<time_futebol*>& getTimes() const;

        /**
         * @brief Obtém os jogos realizados no campeonato.
         * @return Vetor de ponteiros para os jogos realizados.
         */
        const std::vector<jogo*>& getJogos() const;

        /**
         * @brief Adiciona um time ao campeonato.
         * @param t Ponteiro para o time a ser adicionado.
         */
        void adicionar_time(time_futebol* t);

        /**
         * @brief Adiciona um jogo ao campeonato.
         * @param j Ponteiro para o jogo a ser adicionado.
         */
        void adicionar_jogo(jogo* j);

        /**
         * @brief Exibe a classificação do campeonato.
         */
        void exibir_classificacao() const;
};

#endif // CAMPEONATO_H