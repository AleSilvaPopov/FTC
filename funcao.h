#ifndef FUNCAO_H
#define FUNCAO_H

#include <vector>

using namespace std;

//Parte 1 - Teoria dos conjuntos
char menu(int);
vector<int> leitura();
vector<int> uniao(vector<int>, vector<int>);
vector<int> intersecao(vector<int>, vector<int>);
vector<int> diferenca(vector<int>, vector<int>);
void imprime(vector<int>);
vector<int> retira_repetidos(vector<int>);

//Parte 2 - Relações entre Conjuntos
bool reflexiva(vector<int>, vector<int>);
bool simetrica(vector<int>);
bool transitiva(vector<int>);

#endif