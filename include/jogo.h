#ifndef JOGO_H
#define JOGO_H

#include "time_futebol.h"
#include "juiz.h"

/**
 * @class jogo
 * @brief Representa um jogo de futebol entre dois times.
 * 
 * A classe jogo contém informações sobre os times participantes, o juiz principal,
 * e o resultado do jogo.
 */

/**
 * @brief Construtor da classe jogo.
 * 
 * @param casa Ponteiro para o time da casa.
 * @param visitante Ponteiro para o time visitante.
 * @param juiz Ponteiro para o juiz principal.
 */

class jogo {
    protected:
        time_futebol* time_casa; //< Ponteiro para o time da casa.
        time_futebol* time_visitante; //< Ponteiro para o time visitante.

        juiz* juiz_principal; //< Ponteiro para o juiz principal.
        int gols_time_casa; //< Gols marcados pelo time da casa.
        int gols_time_visitante; //< Gols marcados pelo time visitante.
    
    public:

        jogo(time_futebol* casa, time_futebol* visitante, juiz* juiz); //< Construtor

        time_futebol* getTimeCasa() const; //< Obtém o time da casa.

        void setTimeCasa(time_futebol* casa); //< Define o time da casa.

        time_futebol* getTimeVisitante() const; //< Obtém o time visitante.

        void setTimeVisitante(time_futebol* visitante); //< Define o time visitante.

        juiz* getJuizPrincipal() const; //< Obtém o juiz principal.

        void setJuizPrincipal(juiz* juiz); //< Define o juiz principal.

        int getGolsTimeCasa() const; //< Obtém os gols marcados pelo time da casa.

        int getGolsTimeVisitante() const; //< Obtém os gols marcados pelo time visitante.

        void registrar_resultado(int gols_casa, int gols_visitante); //< Registra o resultado do jogo.

        void exibir_informacoes() const; //< Exibe as informações do jogo.
       
};

#endif // JOGO_H