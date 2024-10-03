#include "campeonato.h"
#include <iostream>
#include <algorithm>


//construtor
campeonato::campeonato(const std::string n): nome_campeonato(n) {} 

//obtem nome do campeonato
std::string campeonato::getNomeCampeonato() const {    
     return nome_campeonato;
 }

//define nome do campeonato
void campeonato::setNomeCampeonato(const std::string& n) { 
     nome_campeonato = n;
 }

//obtem times participantes
const std::vector<time_futebol*>& campeonato::getTimes() const { 
     return times;
 }
 
//obtem jogos realizados
const std::vector<jogo*>& campeonato::getJogos() const { 
     return jogos;
 }

//adiciona time ao campeonato
void campeonato::adicionar_time(time_futebol* t) { 
     times.push_back(t);
 }

//adiciona jogo ao campeonato
 void campeonato::adicionar_jogo(jogo* j) { 
     jogos.push_back(j);
 }

//exibe classificacao do campeonato
 void campeonato::exibir_classificacao() const { 

     std::vector<time_futebol*> times_ordenados = times;

     std::sort(times_ordenados.begin(), times_ordenados.end(), [](time_futebol* t1, time_futebol* t2) {
         return t1->getPontuacao() > t2->getPontuacao();
     });

     std::cout << "----------------Classificacao do campeonato----------------\n\n" <<" \t\t"<< nome_campeonato << "\n" << std::endl;
     for (int i = 0; i < times_ordenados.size(); i++) {
         std::cout << i + 1 << " Lugar: " << times_ordenados[i]->getNome() << " - " << times_ordenados[i]->getPontuacao() << " pontos" << std::endl;
     }
 }