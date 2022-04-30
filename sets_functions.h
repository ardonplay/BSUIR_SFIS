//
// Created by Глеб on 30.04.22.
//

#ifndef BSUIR_SFIS_SETS_FUNCTIONS_H
#define BSUIR_SFIS_SETS_FUNCTIONS_H


#include <vector>
#include <iostream>

using namespace std;

void fulling_graphic(vector<int> &set);

void print(vector<int> &set);

vector<int> cross(vector<int> &set_A, vector<int> &set_B);

vector<int> unite(vector<int> &set_A, vector<int> &set_B);

vector<int> difference(vector<int> &set_A, vector<int> &set_B);

vector<int> addition(vector<int> &set, vector<int> &uni);



#endif //BSUIR_SFIS_SETS_FUNCTIONS_H
