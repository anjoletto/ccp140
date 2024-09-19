#include <iostream>
#include "Pessoa.cpp"
#include "Funcionario.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p("Pessoa", "Sobrenome",123456789, 9, 11, 2024, e);
    Funcionario f("Funcionario", "Sobrenome", 987654321, 18, 9, 2024, e, 10000, 1);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;

    cout << "Dados do funcionario" << endl;
    cout << "Nome: " << f.getNome() << " " << f.getSobrenome() << endl;
    cout << "CPF: " << f.getCPF() << endl;
    cout << "Data de nascimento: " << f.getNascimento() << endl;
    cout << "Endereco: " << f.getEndereco() << endl;
}