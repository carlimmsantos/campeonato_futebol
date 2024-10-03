#include "jogo.h"
#include <iostream>

//construtor
jogo::jogo(time_futebol* casa, time_futebol* visitante, juiz* juiz): time_casa(casa), time_visitante(visitante), juiz_principal(juiz), gols_time_casa(0), gols_time_visitante(0) {}
   
//obtem time da casa
time_futebol* jogo::getTimeCasa() const {
    return time_casa;
}

//define time da casa
void jogo::setTimeCasa(time_futebol* casa) {
    time_casa = casa;
}

//obtem time visitante
time_futebol* jogo::getTimeVisitante() const {
    return time_visitante;
}

//define time visitante
void jogo::setTimeVisitante(time_futebol* visitante) {
    time_visitante = visitante;
}

//obtem juiz
juiz* jogo::getJuizPrincipal() const {
    return juiz_principal;
}

//define juiz
void jogo::setJuizPrincipal(juiz* juiz) {
    juiz_principal = juiz;
}

//obtem gols time da casa
int jogo::getGolsTimeCasa() const {
    return gols_time_casa;
}

//obtem gols time visitante
int jogo::getGolsTimeVisitante() const {
    return gols_time_visitante;
}

//registra resultado do jogo 
void jogo::registrar_resultado(int gols_casa, int gols_visitante) {
    gols_time_casa = gols_casa;
    gols_time_visitante = gols_visitante;

    if (gols_time_casa > gols_time_visitante){
        time_casa->registrar_resultado('V');
        time_visitante->registrar_resultado('D');
    }
    
    else if (gols_time_casa == gols_time_visitante){
        time_casa->registrar_resultado('E');
        time_visitante->registrar_resultado('E');
    }
    
    else {
        time_casa->registrar_resultado('D');
        time_visitante->registrar_resultado('V');
        }
}

//exibe informacoes do jogo
void jogo::exibir_informacoes() const{
    std::cout << time_casa->getNome() << " VS " << time_visitante->getNome() << std::endl;
    std::cout << "Juiz: " << (juiz_principal ? juiz_principal->getNome() : "Nenhum") << std::endl;
    std::cout << "Resultado: " << gols_time_casa << " - " << gols_time_visitante << std::endl;
}