//
// Created by Глеб on 30.04.22.
//

#ifndef BSUIR_SFIS_GRAPHICS_FUNCTIONS_H
#define BSUIR_SFIS_GRAPHICS_FUNCTIONS_H

#include <vector>
#include <iostream>

using namespace std;

void fulling_graphic(vector<pair<int,int>> &graphic);

void print(vector<pair<int,int>> &graphic);

vector<pair<int,int>> cross(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B);

vector<pair<int,int>> unite(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B);

vector<pair<int,int>> difference(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B);

vector<pair<int,int>> addition(vector<pair<int,int>> &graphic, vector<pair<int,int>> &uni);

vector<pair<int,int>> inversion(vector<pair<int,int>> &graphic);

vector<pair<int,int>> composition(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B);



#endif //BSUIR_SFIS_GRAPHICS_FUNCTIONS_H
