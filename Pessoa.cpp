#include <iostream>
#include "Data.cpp"
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
        Data nascimento;
    
    public:
        Pessoa(string nome, string sobrenome, long cpf,
               int dia, int mes, int ano):
        nome{nome}, sobrenome{sobrenome}, nascimento{dia, mes, ano}
        {
            this->cpf = cpf;
        }

        void setNome(string nome, string sobrenome){
            this->nome = nome;
            this->sobrenome = sobrenome;
        }

        void setNome(string nome){
            this->nome = nome;    
        }

        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        void setCPF(long cpf){
            this->cpf = cpf;
        }

        string getNome(){
            return this->nome;
        } 

        string getSobrenome(){
            return sobrenome;
        }

        long getCPF(){
            return cpf;
        }

        string getNascimento(){
            return this->nascimento.getData();
        }
};        