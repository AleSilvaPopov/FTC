#include <iostream>
#include <vector>
#include "funcao.h"

using namespace std;

int main(){
    char opcao = '0';
    while(opcao != '3'){
        opcao = menu(2);

        if(opcao == '1'){
            cout << "Digite dois conjuntos(aperte enter para encerrar o primeiro e começar o segundo conjunto): ";
            vector<int> conjunto1 = leitura();
            vector<int> conjunto2 = leitura();

            char op = menu(1);

            if(op == 'a')
                imprime(uniao(conjunto1, conjunto2));
            
            else if(op == 'b')
                imprime(intersecao(conjunto1, conjunto2));
            
            else
                imprime(diferenca(conjunto1, conjunto2));
        }
        else if(opcao == '2'){

        }
        else{
            cout << "Encerrando o programa, Obrigado!\n";
        }
    }
    cout << endl;
    return 0;
}