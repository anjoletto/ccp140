#include <iostream>
using namespace std;

class Data{
    private:
        int dia, mes, ano;
    
    public:
        Data(int dia, int mes, int ano): dia{dia}, mes{mes}, ano{ano}{}

        string getData(){
            return to_string(dia)+"/"+to_string(mes)+"/"+to_string(ano);
        }
};