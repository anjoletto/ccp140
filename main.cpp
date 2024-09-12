#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p("Nome", "Sobrenome",123456789, 9, 11, 2024, e);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;
}