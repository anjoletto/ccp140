#include <iostream>
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
    
    public:
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
};        