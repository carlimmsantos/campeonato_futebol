#include <iostream>
#include "campeonato.h"
#include "time_futebol.h"
#include "jogo.h"
#include "tecnico_jogador.h"
#include "juiz.h"

int main() {
    // Criando o campeonato
    campeonato campeonatoQuadrangular("Campeonato Quadrangular");

    
    printf("\n");
    // Criando técnicos
    tecnico* tecnico1 = new tecnico("Carlos", 45, 3000.0, 10);
    tecnico* tecnico2 = new tecnico("Santana", 50, 3200.0, 15);
    tecnico* tecnico3 = new tecnico("Wesley", 40, 2800.0, 8);
    tecnico_jogador* tecnico_jogador1 = new tecnico_jogador("Luiz", 35, 4000.0, "Atacante", 5, 10, 500.0);

    // Criando times
    time_futebol* time1 = new time_futebol("Sao Paulo", tecnico1);
    time_futebol* time2 = new time_futebol("Galinha", tecnico2);
    time_futebol* time3 = new time_futebol("Flacote", tecnico3);
    time_futebol* time4 = new time_futebol("Porco", tecnico_jogador1);

    // Adicionando jogadores aos times
    for (int i = 1; i <= 5; i++) {
        time1->adicionar_jogador(new jogador("Jogador " + std::to_string(i), 20 + i, 1000.0, "Atacante", 0));
        time2->adicionar_jogador(new jogador("Jogador " + std::to_string(i + 5), 21 + i, 1100.0, "Meio-campo", 0));
        time3->adicionar_jogador(new jogador("Jogador " + std::to_string(i + 10), 22 + i, 1200.0, "Defensor", 0));
        time4->adicionar_jogador(new jogador("Jogador " + std::to_string(i + 15), 23 + i, 1300.0, "Goleiro", 0));
    }

    time1->exibir_informacoes();
    printf("\n");

    time2->exibir_informacoes();
    printf("\n");

    time3->exibir_informacoes();
    printf("\n");

    time4->exibir_informacoes();
    printf("\n");

    // Adicionando times ao campeonato
    campeonatoQuadrangular.adicionar_time(time1);
    campeonatoQuadrangular.adicionar_time(time2);
    campeonatoQuadrangular.adicionar_time(time3);
    campeonatoQuadrangular.adicionar_time(time4);

    // Criando juízes
    juiz* juiz1 = new juiz("Julia", 45);
    juiz* juiz2 = new juiz("Gabi", 50);

    // Registrando os jogos (todos jogam contra todos)
    jogo* jogo1 = new jogo(time1, time2, juiz1);
    jogo* jogo2 = new jogo(time1, time3, juiz2);
    jogo* jogo3 = new jogo(time1, time4, juiz1);
    jogo* jogo4 = new jogo(time2, time3, juiz2);
    jogo* jogo5 = new jogo(time2, time4, juiz1);
    jogo* jogo6 = new jogo(time3, time4, juiz2);

    printf("\n");
    // Registrando resultados dos jogos
    jogo1->registrar_resultado(2, 1); // Time1 2x1 Time2
    jogo1->exibir_informacoes();
    printf("\n");

    jogo2->registrar_resultado(0, 0); // Time1 0x0 Time3
    jogo2->exibir_informacoes();
    printf("\n");

    jogo3->registrar_resultado(3, 2); // Time1 3x2 Time4
    jogo3->exibir_informacoes();
    printf("\n");
    

    jogo4->registrar_resultado(1, 3); // Time2 1x3 Time3
    jogo4->exibir_informacoes();
    printf("\n");

    jogo5->registrar_resultado(2, 2); // Time2 2x2 Time4
    jogo5->exibir_informacoes();
    printf("\n");

    jogo6->registrar_resultado(0, 1); // Time3 1x0 Time4
    jogo6->exibir_informacoes();
    printf("\n");

    // Adicionando jogos ao campeonato
    campeonatoQuadrangular.adicionar_jogo(jogo1);
    campeonatoQuadrangular.adicionar_jogo(jogo2);
    campeonatoQuadrangular.adicionar_jogo(jogo3);
    campeonatoQuadrangular.adicionar_jogo(jogo4);
    campeonatoQuadrangular.adicionar_jogo(jogo5);
    campeonatoQuadrangular.adicionar_jogo(jogo6);

    // Exibindo classificação final
    campeonatoQuadrangular.exibir_classificacao();

    // Limpeza de memória (opcional, dependendo do seu sistema de gerenciamento)
    delete time1;
    delete time2;
    delete time3;
    delete time4;
    delete tecnico1;
    delete tecnico2;
    delete tecnico3;
    delete tecnico_jogador1;
    delete juiz1;
    delete juiz2;
    delete jogo1;
    delete jogo2;
    delete jogo3;
    delete jogo4;
    delete jogo5;
    delete jogo6;

    return 0;
}
