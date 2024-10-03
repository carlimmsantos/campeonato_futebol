#ifndef PESSOA_H
#define PESSOA_H

#include <string>

/**
 * @class pessoa
 * @brief Representa uma pessoa.
 * 
 * A classe pessoa contém informações sobre o nome e a idade da pessoa.
 * Ela fornece métodos para obter e definir o nome e a idade da pessoa,
 * bem como para imprimir os dados da pessoa e comparar pessoas.
 */

class pessoa {
    protected:
        std::string nome; //< Nome da pessoa.
        int idade; //< Idade da pessoa.
        static int contador; //< Contador de pessoas criadas.

    public:
        
        pessoa(std::string n = "", int i = 0); //construtor

        virtual ~pessoa(); //destrutor

        std::string getNome() const; //obtem nome da pessoa

        void setNome(const std::string& n); //define nome da pessoa

        int getIdade() const; //obtem idade da pessoa
        
        void setIdade(int i);//define idade da pessoa

        static int getContador(); //obtem contador de pessoas

        virtual void imprimeDados() const = 0; //imprime dados da pessoa

        bool operator==(const pessoa& p) const; //compara pessoas

};

#endif // PESSOA_H