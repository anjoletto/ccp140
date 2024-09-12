#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p("Nome", "Sobrenome",123456789, 9, 11, 2024);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de nascimento: " << p.getNascimento() << endl;

}