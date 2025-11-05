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
            cout << "Insira o conjunto: ";
            vector<int> conjunto = leitura();
            cout << "Insira a relação: ";
            vector<int> relacao = leitura();

            bool flag = true;

            if(reflexiva(conjunto, relacao)){
                cout << "A relação é REFLEXIVA\n";
                flag = false;
            }
            
            if(simetrica(relacao)){
                cout << "A relação é SIMÉTRICA\n";
                flag = false;
            }
            
            if(transitiva(relacao)){
                cout << "A relação é TRANSITIVA\n";
                flag = false;
            }

            if(flag)
                cout << "Nenhuma das três relações foi encontrada.\n";
        }
        else{
            cout << "Encerrando o programa, Obrigado!\n";
        }
    }
    cout << endl;
    return 0;
}