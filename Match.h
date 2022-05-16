//
// Created by Глеб on 30.04.22.
//

#ifndef BSUIR_SFIS_MATCH_H
#define BSUIR_SFIS_MATCH_H

#include <vector>
#include "sets_functions.h"
#include "graphics_functions.h"

class Match {
public:
    std::vector<int> X;
    std::vector<int> Y;
    std::vector<std::pair<int,int>> G;
};

Match getMatchUni();

void fulling_match(Match &set);

Match cross(Match A, Match B);

Match unite(Match A, Match B);

Match difference(Match A, Match B);

Match sim_difference(Match A, Match B);

Match addition(Match A);

Match inversion(Match set);

Match composition(Match A, Match B);

Match narrowing(Match set);

Match ToBeContinued(Match set);

vector<int> image(Match set);

vector<int> preimage(Match set);

void print(Match set);


#endif //BSUIR_SFIS_MATCH_H
