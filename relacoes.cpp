#include <iostream>
#include <vector>
#include <sstream>
#include "funcao.h"
using namespace std;

bool reflexiva(vector<int> c, vector<int> r){
    for(int i=0; i<c.size(); i++){
        int a = c[i];
        bool par = false;

        for(int j=0; j<r.size(); j+=2){
            if(r[j] == a && r[j+1] == a){
                par = true;
                break;
            }
        }

        if(!par){
            return false;
        }
    }
    return true;
}

bool simetrica(vector<int> r){
    for(int i=0; i<r.size(); i+=2){
        int a = r[i], b = r[i+1];

        if(a == b)
            continue;

        bool inverso = false;

        for (int j = 0; j < r.size(); j += 2) {
            int c = r[j], d = r[j + 1];

            if (c == b && d == a) {
                inverso = true;
                break;
            }
        }

        if(!inverso)
            return false;
    }
    return true;
}

bool transitiva(vector<int> r){

    for(int i=0; i<r.size(); i+=2){
        int a = r[i], b = r[i+1];

        for (int j = 0; j < r.size(); j += 2) {
            int c = r[j];
            int d = r[j + 1];

            if (b == c) {
                
                bool ac = false;

                for (int k = 0; k < r.size(); k += 2) {
                    if (r[k] == a && r[k + 1] == d) {
                        ac = true;
                        break;
                    }
                }

                if (!ac) {
                    return false; 
                }
            }
        }
    }
    return true;
}

