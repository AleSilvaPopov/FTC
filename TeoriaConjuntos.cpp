#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include "funcao.h"
using namespace std;

char menu(int n){
    char escolha;

    if(n == 1){
        cout << "opções:\n"
             << "a. União de Conjuntos;\n"
             << "b. Interseção de Conjuntos;\n"
             << "c. Diferença de Conjuntos.\n"
             << "Digite a opções desejada: ";

        while(cin >> escolha){
            if(escolha == 'a' || escolha == 'b' || escolha == 'c')
                break;

            else cout << "Escolha inválida, tente novamente: ";
        }
    }
    else if(n == 2){
        cout << "Opções:\n"
             << "[1] Teoria Dos conjuntos;\n"
             << "[2] Relações entre Conjuntos;\n" 
             << "[3] Encerrar o programa.\n"
             << "Digite a opções desejada: ";

            while(cin >> escolha){
            if(escolha == '1' || escolha == '2' || escolha == '3')
                break;

            else cout << "Escolha inválida, tente novamente: ";
        }
    }
   return escolha;
}

vector<int> leitura(){
    vector<int> conjunto;
    string leu;

    if(getline(cin >> ws, leu)){
        stringstream ss(leu);
        int valor;

        while (ss >> valor){
            conjunto.push_back(valor);
        }
    }
    return conjunto;
}

vector<int> retira_repetidos(vector<int> v){
    vector<int> f;

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(i==0) 
            f.push_back(v[i]);

        else{
            if(!binary_search(f.begin(), f.end(), v[i])){
                f.push_back(v[i]);
                sort(f.begin(), f.end());
            }
        }
    }
    return f;
}

vector<int> uniao(vector<int> um, vector<int> dois){
    vector<int> final;

    for(int i=0; i<um.size(); i++){
        final.push_back(um[i]);
    }

    sort(final.begin(), final.end());

    for(int i=0; i<dois.size(); i++){
        if(!binary_search(final.begin(), final.end(), dois[i])){
            final.push_back(dois[i]);
            sort(final.begin(), final.end());
        }
    }
    return  retira_repetidos(final);
}

vector<int> intersecao(vector<int> um, vector<int> dois){
    vector<int> final;

    sort(um.begin(), um.end());
    sort(dois.begin(), dois.end());

    for(int i=0; i<um.size(); i++){
            if(binary_search(dois.begin(), dois.end(), um[i]) && !binary_search(final.begin(), final.end(), um[i])){
                final.push_back(um[i]);
                sort(final.begin(), final.end());
            }
    }
    return retira_repetidos(final);
}

vector<int> diferenca(vector<int> um, vector<int> dois){
    vector<int> final;

    sort(um.begin(), um.end());
    sort(dois.begin(), dois.end());

    for(int i=0; i<um.size(); i++){
        if(!binary_search(dois.begin(), dois.end(), um[i])){
            final.push_back(um[i]);
        }
    }

    return retira_repetidos(final);
}

void imprime(vector<int> v){
    cout << "\nConjunto: ";
    for(int i=0; i<v.size(); i++){
        cout << v[i];
        if(i != v.size()-1) cout << '-';
    }
    cout << endl;
}

