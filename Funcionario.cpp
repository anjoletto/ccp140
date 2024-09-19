#include "Pessoa.cpp"

class Funcionario: public Pessoa{
    private:
        double salario;
        int cadastro;
    public:
        Funcionario(string nome, string sobrenome, long cpf,
               int dia, int mes, int ano, Endereco endereco,
               double salario, int cadastro):
            Pessoa(nome, sobrenome, cpf, dia, mes, ano, endereco),
            salario{salario}, cadastro{cadastro}{}
};