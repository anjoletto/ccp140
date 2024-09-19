#include <iostream>
#include "Pessoa.cpp"
#include "Funcionario.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p("Pessoa", "Sobrenome",123456789, 9, 11, 2024, e);
    Funcionario f("Funcionario", "Sobrenome", 987654321, 18, 9, 2024, e, 10000, 1);

    Pessoa* pessoas[2];
    pessoas[0] = &p;
    pessoas[1] = &f;

    for(int i=0;i<2;i++){
        pessoas[i]->print();
    }
}