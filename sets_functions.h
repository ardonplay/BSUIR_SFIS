//
// Created by Глеб on 30.04.22.
//

#ifndef BSUIR_SFIS_SETS_FUNCTIONS_H
#define BSUIR_SFIS_SETS_FUNCTIONS_H


#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> getSetUni();

void fulling_set(vector<int> &set);

void fulling_set(vector<int> &set, char name);

void print(vector<int> set);

//void print(vector<int> set, string output);

vector<int> cross(vector<int> &set_A, vector<int> &set_B);

vector<int> unite(vector<int> &set_A, vector<int> &set_B);

vector<int> difference(vector<int> &set_A, vector<int> &set_B);

vector<int> sim_difference(vector<int> &set_A, vector<int> &set_B);

vector<int> addition(vector<int> &set, vector<int> &uni);

vector<pair<int,int>> decart(vector<int> &set_A, vector<int> &set_B);



#endif //BSUIR_SFIS_SETS_FUNCTIONS_H
