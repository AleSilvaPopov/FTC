#ifndef FUNCAO_H
#define FUNCAO_H

#include <vector>

using namespace std;

char menu(int);
vector<int> leitura();
vector<int> uniao(vector<int>, vector<int>);
vector<int> intersecao(vector<int>, vector<int>);
vector<int> diferenca(vector<int>, vector<int>);
void imprime(vector<int>);
vector<int> retira_repetidos(vector<int>);

#endif